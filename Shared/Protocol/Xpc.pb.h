// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class ConnectResponse;
@class ConnectResponseBuilder;
@class DisconnectResponse;
@class DisconnectResponseBuilder;
@class PathesRequest;
@class PathesRequestBuilder;
@class PathesResponse;
@class PathesResponseBuilder;
@class Server;
@class ServerBuilder;
@class StatusResponse;
@class StatusResponseBuilder;
@class VersionResponse;
@class VersionResponseBuilder;
@class XPCRequest;
@class XPCRequestBuilder;
@class XPCResponse;
@class XPCResponseBuilder;


typedef NS_ENUM(SInt32, Type) {
  TypeVersion = 0,
  TypePathes = 1,
  TypeStatus = 2,
  TypeConnect = 3,
  TypeDisconnect = 4,
};

BOOL TypeIsValidValue(Type value);
NSString *NSStringFromType(Type value);

typedef NS_ENUM(SInt32, Protocol) {
  ProtocolPptp = 0,
  ProtocolL2Tp = 1,
  ProtocolTcp = 2,
  ProtocolUdp = 3,
};

BOOL ProtocolIsValidValue(Protocol value);
NSString *NSStringFromProtocol(Protocol value);

typedef NS_ENUM(SInt32, ExtStatus) {
  ExtStatusSuccess = 0,
  ExtStatusAuthFailed = 1,
  ExtStatusOtherFailed = 2,
};

BOOL ExtStatusIsValidValue(ExtStatus value);
NSString *NSStringFromExtStatus(ExtStatus value);

typedef NS_ENUM(SInt32, Status) {
  StatusOk = 0,
  StatusFail = 1,
};

BOOL StatusIsValidValue(Status value);
NSString *NSStringFromStatus(Status value);

typedef NS_ENUM(SInt32, ServerStatus) {
  ServerStatusConnected = 0,
  ServerStatusDisconnected = 1,
};

BOOL ServerStatusIsValidValue(ServerStatus value);
NSString *NSStringFromServerStatus(ServerStatus value);


@interface XpcRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define PathesRequest_ovpnPath @"ovpnPath"
#define PathesRequest_pppdPath @"pppdPath"
@interface PathesRequest : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasOvpnPath_:1;
  BOOL hasPppdPath_:1;
  NSString* ovpnPath;
  NSString* pppdPath;
}
- (BOOL) hasOvpnPath;
- (BOOL) hasPppdPath;
@property (readonly, strong) NSString* ovpnPath;
@property (readonly, strong) NSString* pppdPath;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PathesRequestBuilder*) builder;
+ (PathesRequestBuilder*) builder;
+ (PathesRequestBuilder*) builderWithPrototype:(PathesRequest*) prototype;
- (PathesRequestBuilder*) toBuilder;

+ (PathesRequest*) parseFromData:(NSData*) data;
+ (PathesRequest*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PathesRequest*) parseFromInputStream:(NSInputStream*) input;
+ (PathesRequest*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PathesRequest*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (PathesRequest*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PathesRequestBuilder : PBGeneratedMessageBuilder {
@private
  PathesRequest* resultPathesRequest;
}

- (PathesRequest*) defaultInstance;

- (PathesRequestBuilder*) clear;
- (PathesRequestBuilder*) clone;

- (PathesRequest*) build;
- (PathesRequest*) buildPartial;

- (PathesRequestBuilder*) mergeFrom:(PathesRequest*) other;
- (PathesRequestBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PathesRequestBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasOvpnPath;
- (NSString*) ovpnPath;
- (PathesRequestBuilder*) setOvpnPath:(NSString*) value;
- (PathesRequestBuilder*) clearOvpnPath;

- (BOOL) hasPppdPath;
- (NSString*) pppdPath;
- (PathesRequestBuilder*) setPppdPath:(NSString*) value;
- (PathesRequestBuilder*) clearPppdPath;
@end

#define VersionResponse_majorVersion @"majorVersion"
#define VersionResponse_minorVersion @"minorVersion"
@interface VersionResponse : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasMajorVersion_:1;
  BOOL hasMinorVersion_:1;
  SInt32 majorVersion;
  SInt32 minorVersion;
}
- (BOOL) hasMajorVersion;
- (BOOL) hasMinorVersion;
@property (readonly) SInt32 majorVersion;
@property (readonly) SInt32 minorVersion;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (VersionResponseBuilder*) builder;
+ (VersionResponseBuilder*) builder;
+ (VersionResponseBuilder*) builderWithPrototype:(VersionResponse*) prototype;
- (VersionResponseBuilder*) toBuilder;

+ (VersionResponse*) parseFromData:(NSData*) data;
+ (VersionResponse*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (VersionResponse*) parseFromInputStream:(NSInputStream*) input;
+ (VersionResponse*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (VersionResponse*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (VersionResponse*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface VersionResponseBuilder : PBGeneratedMessageBuilder {
@private
  VersionResponse* resultVersionResponse;
}

- (VersionResponse*) defaultInstance;

- (VersionResponseBuilder*) clear;
- (VersionResponseBuilder*) clone;

- (VersionResponse*) build;
- (VersionResponse*) buildPartial;

- (VersionResponseBuilder*) mergeFrom:(VersionResponse*) other;
- (VersionResponseBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (VersionResponseBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasMajorVersion;
- (SInt32) majorVersion;
- (VersionResponseBuilder*) setMajorVersion:(SInt32) value;
- (VersionResponseBuilder*) clearMajorVersion;

- (BOOL) hasMinorVersion;
- (SInt32) minorVersion;
- (VersionResponseBuilder*) setMinorVersion:(SInt32) value;
- (VersionResponseBuilder*) clearMinorVersion;
@end

#define Server_id @"id"
#define Server_country @"country"
#define Server_name @"name"
#define Server_dns @"dns"
#define Server_port @"port"
#define Server_protocol @"protocol"
#define Server_login @"login"
#define Server_password @"password"
@interface Server : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasId_:1;
  BOOL hasPort_:1;
  BOOL hasCountry_:1;
  BOOL hasName_:1;
  BOOL hasDns_:1;
  BOOL hasLogin_:1;
  BOOL hasPassword_:1;
  BOOL hasProtocol_:1;
  SInt32 id;
  SInt32 port;
  NSString* country;
  NSString* name;
  NSString* dns;
  NSString* login;
  NSString* password;
  Protocol protocol;
}
- (BOOL) hasId;
- (BOOL) hasCountry;
- (BOOL) hasName;
- (BOOL) hasDns;
- (BOOL) hasPort;
- (BOOL) hasProtocol;
- (BOOL) hasLogin;
- (BOOL) hasPassword;
@property (readonly) SInt32 id;
@property (readonly, strong) NSString* country;
@property (readonly, strong) NSString* name;
@property (readonly, strong) NSString* dns;
@property (readonly) SInt32 port;
@property (readonly) Protocol protocol;
@property (readonly, strong) NSString* login;
@property (readonly, strong) NSString* password;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ServerBuilder*) builder;
+ (ServerBuilder*) builder;
+ (ServerBuilder*) builderWithPrototype:(Server*) prototype;
- (ServerBuilder*) toBuilder;

+ (Server*) parseFromData:(NSData*) data;
+ (Server*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Server*) parseFromInputStream:(NSInputStream*) input;
+ (Server*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Server*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Server*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ServerBuilder : PBGeneratedMessageBuilder {
@private
  Server* resultServer;
}

- (Server*) defaultInstance;

- (ServerBuilder*) clear;
- (ServerBuilder*) clone;

- (Server*) build;
- (Server*) buildPartial;

- (ServerBuilder*) mergeFrom:(Server*) other;
- (ServerBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ServerBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (SInt32) id;
- (ServerBuilder*) setId:(SInt32) value;
- (ServerBuilder*) clearId;

- (BOOL) hasCountry;
- (NSString*) country;
- (ServerBuilder*) setCountry:(NSString*) value;
- (ServerBuilder*) clearCountry;

- (BOOL) hasName;
- (NSString*) name;
- (ServerBuilder*) setName:(NSString*) value;
- (ServerBuilder*) clearName;

- (BOOL) hasDns;
- (NSString*) dns;
- (ServerBuilder*) setDns:(NSString*) value;
- (ServerBuilder*) clearDns;

- (BOOL) hasPort;
- (SInt32) port;
- (ServerBuilder*) setPort:(SInt32) value;
- (ServerBuilder*) clearPort;

- (BOOL) hasProtocol;
- (Protocol) protocol;
- (ServerBuilder*) setProtocol:(Protocol) value;
- (ServerBuilder*) clearProtocol;

- (BOOL) hasLogin;
- (NSString*) login;
- (ServerBuilder*) setLogin:(NSString*) value;
- (ServerBuilder*) clearLogin;

- (BOOL) hasPassword;
- (NSString*) password;
- (ServerBuilder*) setPassword:(NSString*) value;
- (ServerBuilder*) clearPassword;
@end

#define PathesResponse_status @"status"
@interface PathesResponse : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasStatus_:1;
  Status status;
}
- (BOOL) hasStatus;
@property (readonly) Status status;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PathesResponseBuilder*) builder;
+ (PathesResponseBuilder*) builder;
+ (PathesResponseBuilder*) builderWithPrototype:(PathesResponse*) prototype;
- (PathesResponseBuilder*) toBuilder;

+ (PathesResponse*) parseFromData:(NSData*) data;
+ (PathesResponse*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PathesResponse*) parseFromInputStream:(NSInputStream*) input;
+ (PathesResponse*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PathesResponse*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (PathesResponse*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PathesResponseBuilder : PBGeneratedMessageBuilder {
@private
  PathesResponse* resultPathesResponse;
}

- (PathesResponse*) defaultInstance;

- (PathesResponseBuilder*) clear;
- (PathesResponseBuilder*) clone;

- (PathesResponse*) build;
- (PathesResponse*) buildPartial;

- (PathesResponseBuilder*) mergeFrom:(PathesResponse*) other;
- (PathesResponseBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PathesResponseBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasStatus;
- (Status) status;
- (PathesResponseBuilder*) setStatus:(Status) value;
- (PathesResponseBuilder*) clearStatus;
@end

#define ConnectResponse_status @"status"
#define ConnectResponse_extStatus @"extStatus"
@interface ConnectResponse : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasStatus_:1;
  BOOL hasExtStatus_:1;
  Status status;
  ExtStatus extStatus;
}
- (BOOL) hasStatus;
- (BOOL) hasExtStatus;
@property (readonly) Status status;
@property (readonly) ExtStatus extStatus;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ConnectResponseBuilder*) builder;
+ (ConnectResponseBuilder*) builder;
+ (ConnectResponseBuilder*) builderWithPrototype:(ConnectResponse*) prototype;
- (ConnectResponseBuilder*) toBuilder;

+ (ConnectResponse*) parseFromData:(NSData*) data;
+ (ConnectResponse*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ConnectResponse*) parseFromInputStream:(NSInputStream*) input;
+ (ConnectResponse*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ConnectResponse*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ConnectResponse*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ConnectResponseBuilder : PBGeneratedMessageBuilder {
@private
  ConnectResponse* resultConnectResponse;
}

- (ConnectResponse*) defaultInstance;

- (ConnectResponseBuilder*) clear;
- (ConnectResponseBuilder*) clone;

- (ConnectResponse*) build;
- (ConnectResponse*) buildPartial;

- (ConnectResponseBuilder*) mergeFrom:(ConnectResponse*) other;
- (ConnectResponseBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ConnectResponseBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasStatus;
- (Status) status;
- (ConnectResponseBuilder*) setStatus:(Status) value;
- (ConnectResponseBuilder*) clearStatus;

- (BOOL) hasExtStatus;
- (ExtStatus) extStatus;
- (ConnectResponseBuilder*) setExtStatus:(ExtStatus) value;
- (ConnectResponseBuilder*) clearExtStatus;
@end

#define DisconnectResponse_status @"status"
@interface DisconnectResponse : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasStatus_:1;
  Status status;
}
- (BOOL) hasStatus;
@property (readonly) Status status;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (DisconnectResponseBuilder*) builder;
+ (DisconnectResponseBuilder*) builder;
+ (DisconnectResponseBuilder*) builderWithPrototype:(DisconnectResponse*) prototype;
- (DisconnectResponseBuilder*) toBuilder;

+ (DisconnectResponse*) parseFromData:(NSData*) data;
+ (DisconnectResponse*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (DisconnectResponse*) parseFromInputStream:(NSInputStream*) input;
+ (DisconnectResponse*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (DisconnectResponse*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (DisconnectResponse*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface DisconnectResponseBuilder : PBGeneratedMessageBuilder {
@private
  DisconnectResponse* resultDisconnectResponse;
}

- (DisconnectResponse*) defaultInstance;

- (DisconnectResponseBuilder*) clear;
- (DisconnectResponseBuilder*) clone;

- (DisconnectResponse*) build;
- (DisconnectResponse*) buildPartial;

- (DisconnectResponseBuilder*) mergeFrom:(DisconnectResponse*) other;
- (DisconnectResponseBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (DisconnectResponseBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasStatus;
- (Status) status;
- (DisconnectResponseBuilder*) setStatus:(Status) value;
- (DisconnectResponseBuilder*) clearStatus;
@end

#define StatusResponse_status @"status"
#define StatusResponse_server @"server"
@interface StatusResponse : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasServer_:1;
  BOOL hasStatus_:1;
  Server* server;
  ServerStatus status;
}
- (BOOL) hasStatus;
- (BOOL) hasServer;
@property (readonly) ServerStatus status;
@property (readonly, strong) Server* server;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (StatusResponseBuilder*) builder;
+ (StatusResponseBuilder*) builder;
+ (StatusResponseBuilder*) builderWithPrototype:(StatusResponse*) prototype;
- (StatusResponseBuilder*) toBuilder;

+ (StatusResponse*) parseFromData:(NSData*) data;
+ (StatusResponse*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (StatusResponse*) parseFromInputStream:(NSInputStream*) input;
+ (StatusResponse*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (StatusResponse*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (StatusResponse*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface StatusResponseBuilder : PBGeneratedMessageBuilder {
@private
  StatusResponse* resultStatusResponse;
}

- (StatusResponse*) defaultInstance;

- (StatusResponseBuilder*) clear;
- (StatusResponseBuilder*) clone;

- (StatusResponse*) build;
- (StatusResponse*) buildPartial;

- (StatusResponseBuilder*) mergeFrom:(StatusResponse*) other;
- (StatusResponseBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (StatusResponseBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasStatus;
- (ServerStatus) status;
- (StatusResponseBuilder*) setStatus:(ServerStatus) value;
- (StatusResponseBuilder*) clearStatus;

- (BOOL) hasServer;
- (Server*) server;
- (StatusResponseBuilder*) setServer:(Server*) value;
- (StatusResponseBuilder*) setServerBuilder:(ServerBuilder*) builderForValue;
- (StatusResponseBuilder*) mergeServer:(Server*) value;
- (StatusResponseBuilder*) clearServer;
@end

#define XPCRequest_type @"type"
#define XPCRequest_pathes @"pathes"
#define XPCRequest_connect @"connect"
@interface XPCRequest : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasPathes_:1;
  BOOL hasConnect_:1;
  BOOL hasType_:1;
  PathesRequest* pathes;
  Server* connect;
  Type type;
}
- (BOOL) hasType;
- (BOOL) hasPathes;
- (BOOL) hasConnect;
@property (readonly) Type type;
@property (readonly, strong) PathesRequest* pathes;
@property (readonly, strong) Server* connect;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (XPCRequestBuilder*) builder;
+ (XPCRequestBuilder*) builder;
+ (XPCRequestBuilder*) builderWithPrototype:(XPCRequest*) prototype;
- (XPCRequestBuilder*) toBuilder;

+ (XPCRequest*) parseFromData:(NSData*) data;
+ (XPCRequest*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (XPCRequest*) parseFromInputStream:(NSInputStream*) input;
+ (XPCRequest*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (XPCRequest*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (XPCRequest*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface XPCRequestBuilder : PBGeneratedMessageBuilder {
@private
  XPCRequest* resultXpcrequest;
}

- (XPCRequest*) defaultInstance;

- (XPCRequestBuilder*) clear;
- (XPCRequestBuilder*) clone;

- (XPCRequest*) build;
- (XPCRequest*) buildPartial;

- (XPCRequestBuilder*) mergeFrom:(XPCRequest*) other;
- (XPCRequestBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (XPCRequestBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasType;
- (Type) type;
- (XPCRequestBuilder*) setType:(Type) value;
- (XPCRequestBuilder*) clearType;

- (BOOL) hasPathes;
- (PathesRequest*) pathes;
- (XPCRequestBuilder*) setPathes:(PathesRequest*) value;
- (XPCRequestBuilder*) setPathesBuilder:(PathesRequestBuilder*) builderForValue;
- (XPCRequestBuilder*) mergePathes:(PathesRequest*) value;
- (XPCRequestBuilder*) clearPathes;

- (BOOL) hasConnect;
- (Server*) connect;
- (XPCRequestBuilder*) setConnect:(Server*) value;
- (XPCRequestBuilder*) setConnectBuilder:(ServerBuilder*) builderForValue;
- (XPCRequestBuilder*) mergeConnect:(Server*) value;
- (XPCRequestBuilder*) clearConnect;
@end

#define XPCResponse_type @"type"
#define XPCResponse_version @"version"
#define XPCResponse_pathes @"pathes"
#define XPCResponse_status @"status"
#define XPCResponse_connect @"connect"
#define XPCResponse_disconnect @"disconnect"
@interface XPCResponse : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasVersion_:1;
  BOOL hasPathes_:1;
  BOOL hasStatus_:1;
  BOOL hasConnect_:1;
  BOOL hasDisconnect_:1;
  BOOL hasType_:1;
  VersionResponse* version;
  PathesResponse* pathes;
  StatusResponse* status;
  ConnectResponse* connect;
  DisconnectResponse* disconnect;
  Type type;
}
- (BOOL) hasType;
- (BOOL) hasVersion;
- (BOOL) hasPathes;
- (BOOL) hasStatus;
- (BOOL) hasConnect;
- (BOOL) hasDisconnect;
@property (readonly) Type type;
@property (readonly, strong) VersionResponse* version;
@property (readonly, strong) PathesResponse* pathes;
@property (readonly, strong) StatusResponse* status;
@property (readonly, strong) ConnectResponse* connect;
@property (readonly, strong) DisconnectResponse* disconnect;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (XPCResponseBuilder*) builder;
+ (XPCResponseBuilder*) builder;
+ (XPCResponseBuilder*) builderWithPrototype:(XPCResponse*) prototype;
- (XPCResponseBuilder*) toBuilder;

+ (XPCResponse*) parseFromData:(NSData*) data;
+ (XPCResponse*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (XPCResponse*) parseFromInputStream:(NSInputStream*) input;
+ (XPCResponse*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (XPCResponse*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (XPCResponse*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface XPCResponseBuilder : PBGeneratedMessageBuilder {
@private
  XPCResponse* resultXpcresponse;
}

- (XPCResponse*) defaultInstance;

- (XPCResponseBuilder*) clear;
- (XPCResponseBuilder*) clone;

- (XPCResponse*) build;
- (XPCResponse*) buildPartial;

- (XPCResponseBuilder*) mergeFrom:(XPCResponse*) other;
- (XPCResponseBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (XPCResponseBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasType;
- (Type) type;
- (XPCResponseBuilder*) setType:(Type) value;
- (XPCResponseBuilder*) clearType;

- (BOOL) hasVersion;
- (VersionResponse*) version;
- (XPCResponseBuilder*) setVersion:(VersionResponse*) value;
- (XPCResponseBuilder*) setVersionBuilder:(VersionResponseBuilder*) builderForValue;
- (XPCResponseBuilder*) mergeVersion:(VersionResponse*) value;
- (XPCResponseBuilder*) clearVersion;

- (BOOL) hasPathes;
- (PathesResponse*) pathes;
- (XPCResponseBuilder*) setPathes:(PathesResponse*) value;
- (XPCResponseBuilder*) setPathesBuilder:(PathesResponseBuilder*) builderForValue;
- (XPCResponseBuilder*) mergePathes:(PathesResponse*) value;
- (XPCResponseBuilder*) clearPathes;

- (BOOL) hasStatus;
- (StatusResponse*) status;
- (XPCResponseBuilder*) setStatus:(StatusResponse*) value;
- (XPCResponseBuilder*) setStatusBuilder:(StatusResponseBuilder*) builderForValue;
- (XPCResponseBuilder*) mergeStatus:(StatusResponse*) value;
- (XPCResponseBuilder*) clearStatus;

- (BOOL) hasConnect;
- (ConnectResponse*) connect;
- (XPCResponseBuilder*) setConnect:(ConnectResponse*) value;
- (XPCResponseBuilder*) setConnectBuilder:(ConnectResponseBuilder*) builderForValue;
- (XPCResponseBuilder*) mergeConnect:(ConnectResponse*) value;
- (XPCResponseBuilder*) clearConnect;

- (BOOL) hasDisconnect;
- (DisconnectResponse*) disconnect;
- (XPCResponseBuilder*) setDisconnect:(DisconnectResponse*) value;
- (XPCResponseBuilder*) setDisconnectBuilder:(DisconnectResponseBuilder*) builderForValue;
- (XPCResponseBuilder*) mergeDisconnect:(DisconnectResponse*) value;
- (XPCResponseBuilder*) clearDisconnect;
@end


// @@protoc_insertion_point(global_scope)
