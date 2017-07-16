//
// Created by catalin on 12.07.2017.
//

#ifndef RUBIKDETECTORDEMO_ONCUBEDETECTIONRESULTLISTENER_HPP
#define RUBIKDETECTORDEMO_ONCUBEDETECTIONRESULTLISTENER_HPP

class OnCubeDetectionResultListener {
public:
    virtual void onCubeDetectionResult(const int (&result)[9]) = 0;

protected:
    OnCubeDetectionResultListener() {};

    virtual ~OnCubeDetectionResultListener() {};
};

#endif //RUBIKDETECTORDEMO_ONCUBEDETECTIONRESULTLISTENER_HPP
