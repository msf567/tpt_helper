FILES = $(shell xcodebuild -scheme "tpt_helper Debug" build) 
all:
	echo $(FILES)
