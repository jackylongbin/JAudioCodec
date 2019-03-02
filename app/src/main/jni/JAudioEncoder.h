//
// Created by Jacky on 2019/3/2.
//

#ifndef JAUDIOCODEC_JAUDIOENCODER_H
#define JAUDIOCODEC_JAUDIOENCODER_H


#include "libfaac/faac.h"

typedef struct __audio_encoder_param{

    AVCodecID codecID;  // 编码类型
    AVSampleFormat sampleFormat; // 样本格式

    int sampleRate; // 采样率
    int channels;   // 声道
    int channelLayout;
    int bitRate;    // 码率
}AudioEncoderParam;


class JAudioEncoder {

private:
    faacEncHandle mhFaacEncHandle;

};


#endif //JAUDIOCODEC_JAUDIOENCODER_H
