/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * PetApi.h
 *
 * 
 */

#ifndef PetApi_H_
#define PetApi_H_


#include <memory>
#include <corvusoft/restbed/session.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/service.hpp>

#include "ApiResponse.h"
#include "Pet.h"
#include <string>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

class  PetApi: public restbed::Service
{
public:
	PetApi();
	~PetApi();
	void startService(int const& port);
	void stopService();
};


/// <summary>
/// Add a new pet to the store
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  PetApiAddPetResource: public restbed::Resource
{
public:
	PetApiAddPetResource();
    virtual ~PetApiAddPetResource();
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
    void PUT_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Deletes a pet
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  PetApiDeletePetResource: public restbed::Resource
{
public:
	PetApiDeletePetResource();
    virtual ~PetApiDeletePetResource();
    void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Finds Pets by status
/// </summary>
/// <remarks>
/// Multiple status values can be provided with comma separated strings
/// </remarks>
class  PetApiFindPetsByStatusResource: public restbed::Resource
{
public:
	PetApiFindPetsByStatusResource();
    virtual ~PetApiFindPetsByStatusResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Finds Pets by tags
/// </summary>
/// <remarks>
/// Multiple tags can be provided with comma separated strings. Use tag1, tag2, tag3 for testing.
/// </remarks>
class  PetApiFindPetsByTagsResource: public restbed::Resource
{
public:
	PetApiFindPetsByTagsResource();
    virtual ~PetApiFindPetsByTagsResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// uploads an image
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  PetApiUploadFileResource: public restbed::Resource
{
public:
	PetApiUploadFileResource();
    virtual ~PetApiUploadFileResource();
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
};


}
}
}
}

#endif /* PetApi_H_ */
