/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Hbase_TYPES_H
#define Hbase_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace apache { namespace hadoop { namespace hbase { namespace thrift {

typedef std::string Text;

typedef std::string Bytes;

typedef int32_t ScannerID;

typedef struct _TCell__isset {
  _TCell__isset() : value(false), timestamp(false) {}
  bool value;
  bool timestamp;
} _TCell__isset;

class TCell {
 public:

  static const char* ascii_fingerprint; // = "1CCCF6FC31CFD1D61BBBB1BAF3590620";
  static const uint8_t binary_fingerprint[16]; // = {0x1C,0xCC,0xF6,0xFC,0x31,0xCF,0xD1,0xD6,0x1B,0xBB,0xB1,0xBA,0xF3,0x59,0x06,0x20};

  TCell() : value(), timestamp(0) {
  }

  virtual ~TCell() throw() {}

  Bytes value;
  int64_t timestamp;

  _TCell__isset __isset;

  void __set_value(const Bytes& val) {
    value = val;
  }

  void __set_timestamp(const int64_t val) {
    timestamp = val;
  }

  bool operator == (const TCell & rhs) const
  {
    if (!(value == rhs.value))
      return false;
    if (!(timestamp == rhs.timestamp))
      return false;
    return true;
  }
  bool operator != (const TCell &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TCell & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TCell &a, TCell &b);

typedef struct _ColumnDescriptor__isset {
  _ColumnDescriptor__isset() : name(false), maxVersions(true), compression(true), inMemory(true), bloomFilterType(true), bloomFilterVectorSize(true), bloomFilterNbHashes(true), blockCacheEnabled(true), timeToLive(true) {}
  bool name;
  bool maxVersions;
  bool compression;
  bool inMemory;
  bool bloomFilterType;
  bool bloomFilterVectorSize;
  bool bloomFilterNbHashes;
  bool blockCacheEnabled;
  bool timeToLive;
} _ColumnDescriptor__isset;

class ColumnDescriptor {
 public:

  static const char* ascii_fingerprint; // = "3B18638852FDF9DD911BC1174265F92E";
  static const uint8_t binary_fingerprint[16]; // = {0x3B,0x18,0x63,0x88,0x52,0xFD,0xF9,0xDD,0x91,0x1B,0xC1,0x17,0x42,0x65,0xF9,0x2E};

  ColumnDescriptor() : name(), maxVersions(3), compression("NONE"), inMemory(false), bloomFilterType("NONE"), bloomFilterVectorSize(0), bloomFilterNbHashes(0), blockCacheEnabled(false), timeToLive(2147483647) {
  }

  virtual ~ColumnDescriptor() throw() {}

  Text name;
  int32_t maxVersions;
  std::string compression;
  bool inMemory;
  std::string bloomFilterType;
  int32_t bloomFilterVectorSize;
  int32_t bloomFilterNbHashes;
  bool blockCacheEnabled;
  int32_t timeToLive;

  _ColumnDescriptor__isset __isset;

  void __set_name(const Text& val) {
    name = val;
  }

  void __set_maxVersions(const int32_t val) {
    maxVersions = val;
  }

  void __set_compression(const std::string& val) {
    compression = val;
  }

  void __set_inMemory(const bool val) {
    inMemory = val;
  }

  void __set_bloomFilterType(const std::string& val) {
    bloomFilterType = val;
  }

  void __set_bloomFilterVectorSize(const int32_t val) {
    bloomFilterVectorSize = val;
  }

  void __set_bloomFilterNbHashes(const int32_t val) {
    bloomFilterNbHashes = val;
  }

  void __set_blockCacheEnabled(const bool val) {
    blockCacheEnabled = val;
  }

  void __set_timeToLive(const int32_t val) {
    timeToLive = val;
  }

  bool operator == (const ColumnDescriptor & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(maxVersions == rhs.maxVersions))
      return false;
    if (!(compression == rhs.compression))
      return false;
    if (!(inMemory == rhs.inMemory))
      return false;
    if (!(bloomFilterType == rhs.bloomFilterType))
      return false;
    if (!(bloomFilterVectorSize == rhs.bloomFilterVectorSize))
      return false;
    if (!(bloomFilterNbHashes == rhs.bloomFilterNbHashes))
      return false;
    if (!(blockCacheEnabled == rhs.blockCacheEnabled))
      return false;
    if (!(timeToLive == rhs.timeToLive))
      return false;
    return true;
  }
  bool operator != (const ColumnDescriptor &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ColumnDescriptor & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ColumnDescriptor &a, ColumnDescriptor &b);

typedef struct _TRegionInfo__isset {
  _TRegionInfo__isset() : startKey(false), endKey(false), id(false), name(false), version(false), serverName(false), port(false) {}
  bool startKey;
  bool endKey;
  bool id;
  bool name;
  bool version;
  bool serverName;
  bool port;
} _TRegionInfo__isset;

class TRegionInfo {
 public:

  static const char* ascii_fingerprint; // = "B58AB7A239831F8614F7B6709C89DC7B";
  static const uint8_t binary_fingerprint[16]; // = {0xB5,0x8A,0xB7,0xA2,0x39,0x83,0x1F,0x86,0x14,0xF7,0xB6,0x70,0x9C,0x89,0xDC,0x7B};

  TRegionInfo() : startKey(), endKey(), id(0), name(), version(0), serverName(), port(0) {
  }

  virtual ~TRegionInfo() throw() {}

  Text startKey;
  Text endKey;
  int64_t id;
  Text name;
  int8_t version;
  Text serverName;
  int32_t port;

  _TRegionInfo__isset __isset;

  void __set_startKey(const Text& val) {
    startKey = val;
  }

  void __set_endKey(const Text& val) {
    endKey = val;
  }

  void __set_id(const int64_t val) {
    id = val;
  }

  void __set_name(const Text& val) {
    name = val;
  }

  void __set_version(const int8_t val) {
    version = val;
  }

  void __set_serverName(const Text& val) {
    serverName = val;
  }

  void __set_port(const int32_t val) {
    port = val;
  }

  bool operator == (const TRegionInfo & rhs) const
  {
    if (!(startKey == rhs.startKey))
      return false;
    if (!(endKey == rhs.endKey))
      return false;
    if (!(id == rhs.id))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(version == rhs.version))
      return false;
    if (!(serverName == rhs.serverName))
      return false;
    if (!(port == rhs.port))
      return false;
    return true;
  }
  bool operator != (const TRegionInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TRegionInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TRegionInfo &a, TRegionInfo &b);

typedef struct _Mutation__isset {
  _Mutation__isset() : isDelete(true), column(false), value(false), writeToWAL(true) {}
  bool isDelete;
  bool column;
  bool value;
  bool writeToWAL;
} _Mutation__isset;

class Mutation {
 public:

  static const char* ascii_fingerprint; // = "CD9E9D4A6406AD402C90440434AE18A0";
  static const uint8_t binary_fingerprint[16]; // = {0xCD,0x9E,0x9D,0x4A,0x64,0x06,0xAD,0x40,0x2C,0x90,0x44,0x04,0x34,0xAE,0x18,0xA0};

  Mutation() : isDelete(false), column(), value(), writeToWAL(true) {
  }

  virtual ~Mutation() throw() {}

  bool isDelete;
  Text column;
  Text value;
  bool writeToWAL;

  _Mutation__isset __isset;

  void __set_isDelete(const bool val) {
    isDelete = val;
  }

  void __set_column(const Text& val) {
    column = val;
  }

  void __set_value(const Text& val) {
    value = val;
  }

  void __set_writeToWAL(const bool val) {
    writeToWAL = val;
  }

  bool operator == (const Mutation & rhs) const
  {
    if (!(isDelete == rhs.isDelete))
      return false;
    if (!(column == rhs.column))
      return false;
    if (!(value == rhs.value))
      return false;
    if (!(writeToWAL == rhs.writeToWAL))
      return false;
    return true;
  }
  bool operator != (const Mutation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Mutation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Mutation &a, Mutation &b);

typedef struct _BatchMutation__isset {
  _BatchMutation__isset() : row(false), mutations(false) {}
  bool row;
  bool mutations;
} _BatchMutation__isset;

class BatchMutation {
 public:

  static const char* ascii_fingerprint; // = "4B8A4A9E051CAFF532E1C0D54F6AD2AB";
  static const uint8_t binary_fingerprint[16]; // = {0x4B,0x8A,0x4A,0x9E,0x05,0x1C,0xAF,0xF5,0x32,0xE1,0xC0,0xD5,0x4F,0x6A,0xD2,0xAB};

  BatchMutation() : row() {
  }

  virtual ~BatchMutation() throw() {}

  Text row;
  std::vector<Mutation>  mutations;

  _BatchMutation__isset __isset;

  void __set_row(const Text& val) {
    row = val;
  }

  void __set_mutations(const std::vector<Mutation> & val) {
    mutations = val;
  }

  bool operator == (const BatchMutation & rhs) const
  {
    if (!(row == rhs.row))
      return false;
    if (!(mutations == rhs.mutations))
      return false;
    return true;
  }
  bool operator != (const BatchMutation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BatchMutation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(BatchMutation &a, BatchMutation &b);

typedef struct _TIncrement__isset {
  _TIncrement__isset() : table(false), row(false), column(false), ammount(false) {}
  bool table;
  bool row;
  bool column;
  bool ammount;
} _TIncrement__isset;

class TIncrement {
 public:

  static const char* ascii_fingerprint; // = "5F9965D46A4F3845985AC0F9B81C3C69";
  static const uint8_t binary_fingerprint[16]; // = {0x5F,0x99,0x65,0xD4,0x6A,0x4F,0x38,0x45,0x98,0x5A,0xC0,0xF9,0xB8,0x1C,0x3C,0x69};

  TIncrement() : table(), row(), column(), ammount(0) {
  }

  virtual ~TIncrement() throw() {}

  Text table;
  Text row;
  Text column;
  int64_t ammount;

  _TIncrement__isset __isset;

  void __set_table(const Text& val) {
    table = val;
  }

  void __set_row(const Text& val) {
    row = val;
  }

  void __set_column(const Text& val) {
    column = val;
  }

  void __set_ammount(const int64_t val) {
    ammount = val;
  }

  bool operator == (const TIncrement & rhs) const
  {
    if (!(table == rhs.table))
      return false;
    if (!(row == rhs.row))
      return false;
    if (!(column == rhs.column))
      return false;
    if (!(ammount == rhs.ammount))
      return false;
    return true;
  }
  bool operator != (const TIncrement &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TIncrement & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TIncrement &a, TIncrement &b);

typedef struct _TColumn__isset {
  _TColumn__isset() : columnName(false), cell(false) {}
  bool columnName;
  bool cell;
} _TColumn__isset;

class TColumn {
 public:

  static const char* ascii_fingerprint; // = "53A78393C2EDF13B3E77589DF969E89A";
  static const uint8_t binary_fingerprint[16]; // = {0x53,0xA7,0x83,0x93,0xC2,0xED,0xF1,0x3B,0x3E,0x77,0x58,0x9D,0xF9,0x69,0xE8,0x9A};

  TColumn() : columnName() {
  }

  virtual ~TColumn() throw() {}

  Text columnName;
  TCell cell;

  _TColumn__isset __isset;

  void __set_columnName(const Text& val) {
    columnName = val;
  }

  void __set_cell(const TCell& val) {
    cell = val;
  }

  bool operator == (const TColumn & rhs) const
  {
    if (!(columnName == rhs.columnName))
      return false;
    if (!(cell == rhs.cell))
      return false;
    return true;
  }
  bool operator != (const TColumn &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TColumn & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TColumn &a, TColumn &b);

typedef struct _TRowResult__isset {
  _TRowResult__isset() : row(false), columns(false), sortedColumns(false) {}
  bool row;
  bool columns;
  bool sortedColumns;
} _TRowResult__isset;

class TRowResult {
 public:

  static const char* ascii_fingerprint; // = "9A5547565643A177300AFED9A6BD175D";
  static const uint8_t binary_fingerprint[16]; // = {0x9A,0x55,0x47,0x56,0x56,0x43,0xA1,0x77,0x30,0x0A,0xFE,0xD9,0xA6,0xBD,0x17,0x5D};

  TRowResult() : row() {
  }

  virtual ~TRowResult() throw() {}

  Text row;
  std::map<Text, TCell>  columns;
  std::vector<TColumn>  sortedColumns;

  _TRowResult__isset __isset;

  void __set_row(const Text& val) {
    row = val;
  }

  void __set_columns(const std::map<Text, TCell> & val) {
    columns = val;
    __isset.columns = true;
  }

  void __set_sortedColumns(const std::vector<TColumn> & val) {
    sortedColumns = val;
    __isset.sortedColumns = true;
  }

  bool operator == (const TRowResult & rhs) const
  {
    if (!(row == rhs.row))
      return false;
    if (__isset.columns != rhs.__isset.columns)
      return false;
    else if (__isset.columns && !(columns == rhs.columns))
      return false;
    if (__isset.sortedColumns != rhs.__isset.sortedColumns)
      return false;
    else if (__isset.sortedColumns && !(sortedColumns == rhs.sortedColumns))
      return false;
    return true;
  }
  bool operator != (const TRowResult &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TRowResult & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TRowResult &a, TRowResult &b);

typedef struct _TScan__isset {
  _TScan__isset() : startRow(false), stopRow(false), timestamp(false), columns(false), caching(false), filterString(false), batchSize(false), sortColumns(false), reversed(false), cacheBlocks(false) {}
  bool startRow;
  bool stopRow;
  bool timestamp;
  bool columns;
  bool caching;
  bool filterString;
  bool batchSize;
  bool sortColumns;
  bool reversed;
  bool cacheBlocks;
} _TScan__isset;

class TScan {
 public:

  static const char* ascii_fingerprint; // = "6FA1E3494CF4F9366BC36F37FCFD516B";
  static const uint8_t binary_fingerprint[16]; // = {0x6F,0xA1,0xE3,0x49,0x4C,0xF4,0xF9,0x36,0x6B,0xC3,0x6F,0x37,0xFC,0xFD,0x51,0x6B};

  TScan() : startRow(), stopRow(), timestamp(0), caching(0), filterString(), batchSize(0), sortColumns(0), reversed(0), cacheBlocks(0) {
  }

  virtual ~TScan() throw() {}

  Text startRow;
  Text stopRow;
  int64_t timestamp;
  std::vector<Text>  columns;
  int32_t caching;
  Text filterString;
  int32_t batchSize;
  bool sortColumns;
  bool reversed;
  bool cacheBlocks;

  _TScan__isset __isset;

  void __set_startRow(const Text& val) {
    startRow = val;
    __isset.startRow = true;
  }

  void __set_stopRow(const Text& val) {
    stopRow = val;
    __isset.stopRow = true;
  }

  void __set_timestamp(const int64_t val) {
    timestamp = val;
    __isset.timestamp = true;
  }

  void __set_columns(const std::vector<Text> & val) {
    columns = val;
    __isset.columns = true;
  }

  void __set_caching(const int32_t val) {
    caching = val;
    __isset.caching = true;
  }

  void __set_filterString(const Text& val) {
    filterString = val;
    __isset.filterString = true;
  }

  void __set_batchSize(const int32_t val) {
    batchSize = val;
    __isset.batchSize = true;
  }

  void __set_sortColumns(const bool val) {
    sortColumns = val;
    __isset.sortColumns = true;
  }

  void __set_reversed(const bool val) {
    reversed = val;
    __isset.reversed = true;
  }

  void __set_cacheBlocks(const bool val) {
    cacheBlocks = val;
    __isset.cacheBlocks = true;
  }

  bool operator == (const TScan & rhs) const
  {
    if (__isset.startRow != rhs.__isset.startRow)
      return false;
    else if (__isset.startRow && !(startRow == rhs.startRow))
      return false;
    if (__isset.stopRow != rhs.__isset.stopRow)
      return false;
    else if (__isset.stopRow && !(stopRow == rhs.stopRow))
      return false;
    if (__isset.timestamp != rhs.__isset.timestamp)
      return false;
    else if (__isset.timestamp && !(timestamp == rhs.timestamp))
      return false;
    if (__isset.columns != rhs.__isset.columns)
      return false;
    else if (__isset.columns && !(columns == rhs.columns))
      return false;
    if (__isset.caching != rhs.__isset.caching)
      return false;
    else if (__isset.caching && !(caching == rhs.caching))
      return false;
    if (__isset.filterString != rhs.__isset.filterString)
      return false;
    else if (__isset.filterString && !(filterString == rhs.filterString))
      return false;
    if (__isset.batchSize != rhs.__isset.batchSize)
      return false;
    else if (__isset.batchSize && !(batchSize == rhs.batchSize))
      return false;
    if (__isset.sortColumns != rhs.__isset.sortColumns)
      return false;
    else if (__isset.sortColumns && !(sortColumns == rhs.sortColumns))
      return false;
    if (__isset.reversed != rhs.__isset.reversed)
      return false;
    else if (__isset.reversed && !(reversed == rhs.reversed))
      return false;
    if (__isset.cacheBlocks != rhs.__isset.cacheBlocks)
      return false;
    else if (__isset.cacheBlocks && !(cacheBlocks == rhs.cacheBlocks))
      return false;
    return true;
  }
  bool operator != (const TScan &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TScan & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TScan &a, TScan &b);

typedef struct _TAppend__isset {
  _TAppend__isset() : table(false), row(false), columns(false), values(false) {}
  bool table;
  bool row;
  bool columns;
  bool values;
} _TAppend__isset;

class TAppend {
 public:

  static const char* ascii_fingerprint; // = "5F51D90BC323BCE4B704B7D98EDA0BD4";
  static const uint8_t binary_fingerprint[16]; // = {0x5F,0x51,0xD9,0x0B,0xC3,0x23,0xBC,0xE4,0xB7,0x04,0xB7,0xD9,0x8E,0xDA,0x0B,0xD4};

  TAppend() : table(), row() {
  }

  virtual ~TAppend() throw() {}

  Text table;
  Text row;
  std::vector<Text>  columns;
  std::vector<Text>  values;

  _TAppend__isset __isset;

  void __set_table(const Text& val) {
    table = val;
  }

  void __set_row(const Text& val) {
    row = val;
  }

  void __set_columns(const std::vector<Text> & val) {
    columns = val;
  }

  void __set_values(const std::vector<Text> & val) {
    values = val;
  }

  bool operator == (const TAppend & rhs) const
  {
    if (!(table == rhs.table))
      return false;
    if (!(row == rhs.row))
      return false;
    if (!(columns == rhs.columns))
      return false;
    if (!(values == rhs.values))
      return false;
    return true;
  }
  bool operator != (const TAppend &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAppend & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TAppend &a, TAppend &b);

typedef struct _IOError__isset {
  _IOError__isset() : message(false) {}
  bool message;
} _IOError__isset;

class IOError : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  IOError() : message() {
  }

  virtual ~IOError() throw() {}

  std::string message;

  _IOError__isset __isset;

  void __set_message(const std::string& val) {
    message = val;
  }

  bool operator == (const IOError & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const IOError &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IOError & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(IOError &a, IOError &b);

typedef struct _IllegalArgument__isset {
  _IllegalArgument__isset() : message(false) {}
  bool message;
} _IllegalArgument__isset;

class IllegalArgument : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  IllegalArgument() : message() {
  }

  virtual ~IllegalArgument() throw() {}

  std::string message;

  _IllegalArgument__isset __isset;

  void __set_message(const std::string& val) {
    message = val;
  }

  bool operator == (const IllegalArgument & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const IllegalArgument &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IllegalArgument & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(IllegalArgument &a, IllegalArgument &b);

typedef struct _AlreadyExists__isset {
  _AlreadyExists__isset() : message(false) {}
  bool message;
} _AlreadyExists__isset;

class AlreadyExists : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  AlreadyExists() : message() {
  }

  virtual ~AlreadyExists() throw() {}

  std::string message;

  _AlreadyExists__isset __isset;

  void __set_message(const std::string& val) {
    message = val;
  }

  bool operator == (const AlreadyExists & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const AlreadyExists &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AlreadyExists & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(AlreadyExists &a, AlreadyExists &b);

}}}} // namespace

#endif
