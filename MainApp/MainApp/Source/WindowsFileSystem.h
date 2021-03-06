#pragma once
#include "IFileSystem.h"
#include <windows.h>

class WindowsFileSystem : public IFileSystem
{
public:
	WindowsFileSystem();
	~WindowsFileSystem();

	virtual const bool FileExists(const char* const absoluteFilePath) override;
	virtual const char* const CreateDirectory(const char* const absoluteFilePath);
};