/*
 * YASE: Yet Another Storage Engine
 *
 * CMPT 454/984 Fall 2026
 *
 * Copyright (C) School of Computing Science, Simon Fraser University
 *
 * Not for distribution without prior approval.
 */
#include <fcntl.h>
#include "basefile.h"

namespace yase {

BaseFile::BaseFile(std::string name) {
  // Example error handling code:
  // - Using glog to throw a fatal error if ret is less than 0 with a message "error"
  //   LOG_IF(FATAL, ret < 0) << "error";
  // - Using abort system call:
  //   if (ret < 0) {
  //     abort();
  //   }
  //
  // TODO: Your implementation
}

BaseFile::~BaseFile() {
  // TODO: Your implementation
}

bool BaseFile::WritePage(PageId pid, void *page) {
  // TODO: Your implementation
  return false;
}

bool BaseFile::LoadPage(PageId pid, void *out_buf) {
  // TODO: Your implementation
  return false;
}

PageId BaseFile::CreatePage() {
  // TODO: Your implementation
  PageId pid;
  return pid;
}

}  // namespace yase
