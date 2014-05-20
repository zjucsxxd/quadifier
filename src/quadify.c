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


#include "quadify.h"

void quadify(IplImage* img){
      for (int y = 0; y < src->height; y++) {
        uchar* ptr = (uchar*) (src->imageData + y * src->widthStep);
        for (int x = 0; x < src->width; x++) {
            Node* current_node = overlay->nodes[x + (y * src->width)];
            current_node->color = BLACK;
            if (!(ptr[3 * x + 1] < threshold->HT
                        && ptr[3 * x + 3] < threshold->VT)) {
                ptr[3 * x + 1] = 255; //Color the pixel white
                ptr[3 * x + 2] = 255;
                ptr[3 * x + 3] = 255;
                current_node->red = 1; //Set node as red
            } else {
                current_node->red = 0;
            }
        }
    }
}
