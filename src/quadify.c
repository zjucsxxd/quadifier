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
#include <math.h>

void modify(Section* sec, IplImage* img, )

/* Returns 1 if branching is required
*/
int classify(Section* sec, IplImage* img, int dist){
}

void branch(Section* sec){

}

void quadify(IplImage* img){
    Section* testsec = malloc(sizeof(Section));
    testsec->sx = 0;
    testsec->sy = 0;
    testsec->x = img->width;
    testsec->y = img->height;
    printf("%d %d\n", testsec->x, testsec->y);
        //classify(testsec, img, );
}

