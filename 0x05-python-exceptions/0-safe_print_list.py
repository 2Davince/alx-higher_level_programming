#!/usr/bin/python3

def safe_print_list(my_list=[], z=0)


"""Print z elememts of a list.

    Args:
        my_list (list): The list to print elements from.
        z (int): The number of elements of my_list to print.

    Returns:number of printed elements.
    """

ret = 0
for i in range(z):
    try:
        print("{}".format(my_list[i]), end="")
        ret += 1
    except IndexError:
        break
print("")
return (ret)
