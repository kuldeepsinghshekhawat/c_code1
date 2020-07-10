union Item
{
    int x;
    float y;
    char z;

    /* data */
};

void main()
{
    union Item i1;
    i1.x=5;
    printf("x=%d\n ",i1.x);
    i1.y=5.34;
    printf("y=%f\n",i1.y);
    i1.z='a';
    printf("z=%c",i1.z);
    
}
