#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef unsigned char BYTE;

BYTE key[64], state[264];

void ahtopb (char *ascii_hex, BYTE *p_binary, int bin_len)
{
	BYTE    nibble;
	int     i;

	for ( i=0; i<bin_len; i++ ) {
        nibble = ascii_hex[i * 2];
        printf("%s", ascii_hex[i * 2]);
	    if ( nibble > 'F' )
	        nibble -= 0x20;
	    if ( nibble > '9' )
	        nibble -= 7;
	    nibble -= '0';
	    p_binary[i] = nibble << 4;

	    nibble = ascii_hex[i * 2 + 1];
	    if ( nibble > 'F' )
			nibble -= 0x20;
        if ( nibble > '9' )
            nibble -= 7;
        nibble -= '0';
		p_binary[i] += nibble;
        printf("%s", p_binary[i]);
	}
}


void vSwap (BYTE *S, int i, int j) {
    unsigned char val = S[i];
    S[i] = S[j];
    S[j] = val;

}

void m_rc4_init (BYTE *D, unsigned char *key, int keylen)  {

    BYTE  *S = D+8;
    unsigned char T[256];
    int i, j=0;

    // Initialization of the state vector  S
    for (i=0; i < 256; i++)  {
        S[i] = i;
        T[i] = key[i % keylen];
    }

    // Initial permutation of S using the key
    for (i=0; i < 256; i++)  {
        j = (j + S[i] + T[i]) % 256;
        vSwap (S, i, j);
    }

    // Initialize initial i and j
    int *p_int = (int *)D;
    *p_int = 0;
    *(p_int+1) = 0;

    return;
}


BYTE m_rc4_gen(BYTE *D)  {

    BYTE *S = D+8;
    int i, j, t;
    BYTE obyte;
    int *p_int = (int *)D;

    // Initialization of i and j
    i = *p_int;
    j = *(p_int+1);

    // Generate one byte of the PSRN stream
    i = (i+1) % 256;
    j = (j + S[i]) % 256;
    vSwap(S, i, j);
    t = (S[i] + S[j]) % 256;
    obyte = S[t];

    // Set the new values of i and j into the input vector
    *p_int = i;
    *(p_int+1) = j;

    return (obyte);
}

void initialize() {
    // Get key in byte format
	memset((void *)key, 0, sizeof(key));
ahtopb("987b6a6bf2c56a97291c445409920032499f9ee7ad128301b5d0254aa1a9633fdbd378d40149f1e23a13849f3d45992f5c4c6b7104099bc301f6005f9d8115e1", key, 64);

	// Initialize the RC4 generator
	m_rc4_init(state, key, sizeof(key));

    return;
}

char  decifrar(char input_char)  {
    char ch = input_char ^ m_rc4_gen(state);
    return ch;
}

/**********************************************************************************************/


int main() {

    initialize();

    /*   Seu código aqui  */


