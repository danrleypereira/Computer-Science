echo "criando diretorios"

for i in $(seq 10 30);
do
	echo "criando arquivo Vim Ex$i/.c"
	cd L04Ex$i/ && vim Ex$i/.c
	cd ..
done
