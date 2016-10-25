/*
 ******************************************************************************
 * Copyright (c) 2016 Tencent Inc. All rights reserved
 * Author: markwei@tencent.com
 * Date: 2016-10-10
 * Description:
 ******************************************************************************
 */
#include "ring_buffer.h"


int main()
{
    RingBuffer rb;
    rb.Alloc(7);

    unsigned char str[128] = {0};
    int n;

    str[0] = 'a';
    n = rb.Put(str, 1);

    str[1] = 'b';
    n = rb.Put(str, 2);

    str[2] = 'c';
    n = rb.Put(str, 3);

    str[3] = 'd';
    n = rb.Put(str, 4);

    str[4] = 'e';
    n = rb.Put(str, 5);

    n = rb.Get(str, 2);
    n = rb.Get(str, 1);

    rb.Free();

    return 0;
}
