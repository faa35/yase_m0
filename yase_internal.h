/*
 * YASE: Yet Another Storage Engine
 *
 * CMPT 454/984 Fall 2026
 *
 * Copyright (C) School of Computing Science, Simon Fraser University
 *
 * Not for distribution without prior approval.
 */
#pragma once

#include <glog/logging.h>

namespace yase {

// Page ID - a 64-bit integer
struct PageId {
  // Represents an Invalid ID
  static const uint64_t kInvalidValue = ~uint64_t{0};

  // Structure of the Page ID:
  // |---32 bits--|--16 bits--|--16 bits--|
  // |  File ID   | Page Num  |  Unused  |
  uint64_t value;

  // Constructors
  PageId() : value(kInvalidValue) {}
  PageId(int file_id, uint32_t page_num) {
    value = (((uint64_t)file_id) << 32UL) | (((uint64_t)page_num) << 16UL);
  }
  PageId(uint64_t value) : value(value) {
    LOG_IF(FATAL, !IsValid()) << "Invalid value";
  }

  inline bool IsValid() { return value != kInvalidValue; }
  inline uint32_t GetPageNum() const { return (value & 0xffffffff) >> 16; }
  inline uint32_t GetFileId() const { return value >> 32UL; }
};

}  // namespace yase
