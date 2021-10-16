#include "camera.h"

int main()
{
    open_camera();
    while(1)
    {
        Mat src;
        Mat result;
        cam >> src;
        cam >> result;
        transform_to_hsvmask(src);
        make_contours(src, result);
        imshow("src", src);
        imshow("result",result);


        char input;
        input=waitKey(1);
        if(input==27)
        {
            break;
        }
    }
}

