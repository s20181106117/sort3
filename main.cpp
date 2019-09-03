//
//  main.cpp
//  sort 1
//
//  Created by s20181106117 on 2019/9/3.
//  Copyright © 2019 yxy. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int arr[2][3]={1,2,3,4,5,6};
    int (*p)[3];
    p=arr;
    cout<<(*p)[0]<<endl;
    p++;
    cout<<(*p)[1]<<endl;
    return 0;
}
