#include <vector>
#include <opencv2/opencv.hpp>

int main() {
    // Loading Video Capture
    cv::VideoCapture capture(0);
    if (!capture.isOpened()) {
        std::cout << "Error: Could not open webcam." << '\n';
        return 1;
    }

    // Setup
    std::string path = "/home/tibor/Desktop/projects/OpenCV/Face Tracking/resources/haarcascade_frontalface_default.xml";
    cv::CascadeClassifier pretrainedModel;
    if (!pretrainedModel.load(path)) {
        std::cerr << "Error: Could not load pre-trained model." << '\n';
        return 1;
    }

    cv::Mat img;
    cv::Mat imgGray;

    while (true) {
        capture.read(img);
        if (img.empty()) {
            std::cout << "Error: Could not read frame." << '\n';
            break;
        }

        // Operation
        cv::cvtColor(img, imgGray, cv::COLOR_BGR2GRAY);
        std::vector<cv::Rect> coordinateList;
        pretrainedModel.detectMultiScale(imgGray, coordinateList, 1.1, 3);

        // Drawing rectangles
        for (const cv::Rect &rect: coordinateList) {
            cv::rectangle(img, rect, cv::Scalar(255, 0, 255));
        }

        // Displaying the result
        cv::imshow("Webcam", img);
        if (cv::waitKey(30) == 27) {
            cv::destroyAllWindows();
            break;
        }
    }

    return 0;
}