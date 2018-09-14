#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat img;
    cv::namedWindow("img");

    cv::imshow("img",img);

    cv::waitKey(0);
    return 0;
}