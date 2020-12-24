def sort_colors1(color_list):
    color_list.sort()

#-----------------------------------

def sort_colors2(color_list):
    red=0
    white=1
    blue=2

    temp=[]
    for item in color_list:
        if item==0:
            temp.append(item)

    for item in color_list:
        if item==1:
            temp.append(item)

    for item in color_list:
        if item==2:
            temp.append(item)

    return temp


#----------------------------------------

def sort_colors3(color_list):
    red_count=0
    white_count=0
    blue_count=0

    for item in color_list:
        if item ==0:
            red_count+=1
        elif item ==1:
            white_count+=1
        else:
            blue_count+=1

    # print("red_count ", red_count)
    # print("white_count ", white_count)
    # print("blue_count ", blue_count)
    k=0
    while(red_count>0):
        color_list[k]=0
        red_count-=1
        k+=1
    #print(k)
    while(white_count>0):
        color_list[k]=1
        white_count-=1
        k+=1
    #print(k)
    while(blue_count>0):
        color_list[k]=2
        blue_count-=1
        k+=1
    #print(k)
    return color_list


#--------------------------------------

color_list=[1,0,1,2,0,0,2,2,]
#sort_colors1(color_list)
print(color_list)
print(sort_colors2(color_list))
print(sort_colors3(color_list))
