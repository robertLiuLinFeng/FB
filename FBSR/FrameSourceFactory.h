#pragma once

#include "EmptyFrameSource.hpp"
#include "VideoFrameSource.hpp"

class FrameSourceFactory
{
public:
	static cv::Ptr<FrameSource> createEmptyFrameSource()
	{
		return new EmptyFrame();
	}

	static cv::Ptr<FrameSource> createFrameSourceFromVideo(const string& videoFileName)
	{
		return new VideoFrameSource(videoFileName);
	}
};

