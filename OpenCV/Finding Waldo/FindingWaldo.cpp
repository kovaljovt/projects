#include <opencv2/opencv.hpp>

// 1. Loading images
// 2. Converting images into gray
// 3. Matching images and saving it to result
// 4. Making a rectangle on the Waldo location
// 5. Displaying results

int main() {
    // 1.
    std::string beachPath = "/home/tibor/Desktop/projects/OpenCV/Finding Waldo/resources/WaldoBeach.jpg";
    std::string waldoPath = "/home/tibor/Desktop/projects/OpenCV/Finding Waldo/resources/waldo.jpg";
    cv::Mat beach = cv::imread(beachPath);
    cv::Mat waldo = cv::imread(waldoPath);
    // 2.
    cv::Mat beachGray;
    cv::cvtColor(beach, beachGray, cv::COLOR_BGR2GRAY);
    cv::Mat waldoGray;
    cv::cvtColor(waldo, waldoGray, cv::COLOR_BGR2GRAY);
    // 3.
    cv::Mat result;
    double minVal, maxVal;
    cv::Point minLoc, maxLoc;
    cv::matchTemplate(beachGray, waldoGray, result, cv::TM_CCOEFF);
    cv::minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc);
    std::cout << maxLoc << '\n';
    // 4.
    cv::Point topLeft = maxLoc;
    cv::Point bottomRight = cv::Point(topLeft.x + 50, topLeft.y + 50);
    cv::rectangle(beach, topLeft, bottomRight, cv::Scalar(255, 0, 255), 2);
    // 5.
    cv::imshow("Waldo Beach", beach);
    cv::waitKey(0);

    return 0;
}