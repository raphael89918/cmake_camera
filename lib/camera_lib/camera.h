#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>

using namespace std;
using namespace cv;

void open_camera();
void transform_to_hsvmask(Mat &src);
void make_contours(Mat &src, Mat &result);

VideoCapture cam;
