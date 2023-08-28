#!/usr/bin/python3

def safe_print_list_integers(my_list=[], x=0):
    count = 0
    try:
        for element in my_list:
            try:
                formatted_element = "{:d}".format(element)
                print(formatted_element, end=' ')
                count += 1
                if count >= x:
                    break
            except ValueError:
                pass
    except:
        pass
    
    print() 
    return count

