//
// Created by ros on 4/5/18.
//

#ifndef OBJECT_DETECT_POSEEDGE_H
#define OBJECT_DETECT_POSEEDGE_H


#include "Pose.h"

class PoseEdge {
public:
    PoseEdge(std::shared_ptr<Pose> p1, std::shared_ptr<Pose> p2){
        v1 = p1;
        v2 = p2;
    }
    Eigen::Matrix<double,3,3> information;
    std::shared_ptr<Pose> v1;
    std::shared_ptr<Pose> v2;

};


#endif //OBJECT_DETECT_POSEEDGE_H
