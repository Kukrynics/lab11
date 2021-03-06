// Copyright 2021 ivan <ikhonyak@gmail.com>

#ifndef INCLUDE_BUILDER_HPP_
#define INCLUDE_BUILDER_HPP_
#include <async++.h>
#include <string>
#include "boost/process.hpp"
#include "iostream"
class builder {
 private:
  std::string config_;
  bool install_;
  bool pack_;
  uint timeout_;
  boost::process::child process_;

 public:
  builder(std::string config, bool install, bool pack, uint timeout)
      : config_(config), install_(install), pack_(pack), timeout_(timeout){}
  void startBuild();
  bool executeCommand(const std::string& arguments);
};
#endif  // INCLUDE_BUILDER_HPP_
