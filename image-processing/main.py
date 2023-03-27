from PIL import Image, ImageFilter
import os, sys

def convert_file_to_and_save(infile, extension):
    for infile in sys.argv[1:]:
        f, e = os.path.splitext(infile)
        outfile = "./" + f + "." + extension
        if infile != outfile:
            try:
                with Image.open(infile) as im:
                    im.save(outfile)
            except OSError:
                print("cannot convert", infile)


def ex01():
    im = Image.open("fig_1.tif")
    # im.show()
    out = im.point(lambda i: i - 255)
    out.show()
    out.save('fig_1.png')
    return


def ex02():
    im = Image.open("fig_2.tif")
    # im.show()
    out = im.point(lambda i: 0 if i < 127 else 255)
    out.show()
    out.save('fig_2.png')
    return


def ex03():
    im = Image.open("fig_3.tif")
    filtered = im.filter(ImageFilter.BLUR)
    filtered = im.filter(ImageFilter.FIND_EDGES)
    filtered = im.filter(ImageFilter.EMBOSS)
    filtered.save('fig_3.png')
    filtered.show()
    return

ex01()
ex02()
ex03()