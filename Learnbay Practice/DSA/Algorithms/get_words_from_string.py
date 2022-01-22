# def count_frequency(word_list):
#     L = []
#     for new_word in word_list:
#         for entry in L:
#             if new_word == entry[0]:
#                 entry[1] = entry[1] + 1
#                 break
#         else:
#             L.append([new_word,1])
#
#     return L
#
#
# print(count_frequency(["the","Fox","is","in","the", "hat"]))
import sys

##################################
# Operation 1: read a text file ##
##################################
def read_file(filename):
    """
    Read the text file with the given filename;
    return a list of the lines of text in the file.
    """
    try:
        with open(filename) as f:
            print(f.readlines())
        return f.readlines()
    except IOError:
        print("Error opening or reading input file: ", filename)
        sys.exit()

read_file(filename_1.txt)
