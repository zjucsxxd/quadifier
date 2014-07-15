/*  This file is part of MultirotorDrone.

    MultirotorDrone is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    MultirotorDrone is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with MultirotorDrone.  If not, see <http://www.gnu.org/licenses/>.
    */

/**
 * @file cv_main.c
 *
 * @brief Source that manages OpenCV and invokes object detection
 *
 * @author Fredrik Saevland <frs2@aber.ac.uk>
 * \copyright Copyright 2014 Fredrik Sævland. All rights reserved.
 *
 * @date 2014.03.10
 */

#include "interface.h"
#include "quadify.h"
#include <stdio.h>

int run(char* path){
    cvNamedWindow("Show", CV_WINDOW_AUTOSIZE);
    IplImage* img = cvLoadImage(path, 1);
        quadify(img);
        cvShowImage("Show", img);
        cvWaitKey(0);
        cvReleaseImage(&img);
    return 0;
}

/**
 * @brief Entrypoint of program
 * @return runstate
 */
int main(int argc, char** argv){
    char* path;
    if(argc){
    path = argv[1];
    }else{
    printf("Need path\n");
    return 1;
    }
    printf("Starting...\n");
    run(path);
    return 0;
}
