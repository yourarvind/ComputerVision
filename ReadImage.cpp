#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	//string imageName = "C:\\Temp\\HelloImage\\images\\candy.jpg";
	string imageName = "candy.jpg";

  Mat image; //The n-dimensional matrix class.
	image = imread(imageName, IMREAD_COLOR); // Read the file

	if (!image.data) // Check for invalid input
	{
		cout << "Error reading image" << std::endl;
		return -1;
	}

  // create an OpenCV window using the namedWindow function. These are automatically managed by OpenCV once you create them.
	namedWindow("Display window", WINDOW_AUTOSIZE); // Create a window for display.
  
  // To update the content of the OpenCV window with a new image use the imshow function
	imshow("Display window", image); // Show our image inside it.
  
  //-------------------------------------------------------------------------
  //Flipped Image Vertically ------------------------------------------------
	//Mat flippedImage;
	//flip(image, flippedImage, 1);
	//namedWindow("Flipped Window", WINDOW_AUTOSIZE); // Create a window for display.
	//imshow("Flipped Window", flippedImage); // Show our image inside it.
  //--------------------------------------------------------------------------
  
  // Displayed until the user presses a key. argument 0 means wait for infinite time. 
	waitKey(0);

  return 0;
}

/*
 Required settings:
      OPENCV_DIR:            C:\opencv\build\x64\vc14
      Include Directories:   $(OPENCV_DIR)\..\..\include
      Library Directories:   $(OPENCV_DIR)\lib
      

Required common libraries:
      opencv_calib3d2413d.lib
      opencv_contrib2413d.lib
      opencv_core2413d.lib
      opencv_features2d2413d.lib
      opencv_flann2413d.lib
      opencv_gpu2413d.lib
      opencv_highgui2413d.lib
      opencv_imgproc2413d.lib
      opencv_legacy2413d.lib
      opencv_ml2413d.lib
      opencv_nonfree2413d.lib
      opencv_objdetect2413d.lib
      opencv_ocl2413d.lib
      opencv_photo2413d.lib
      opencv_stitching2413d.lib
      opencv_superres2413d.lib
      opencv_ts2413d.lib
      opencv_video2413d.lib
      opencv_videostab2413d.lib

*/



