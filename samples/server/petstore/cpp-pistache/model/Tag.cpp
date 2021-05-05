/**
* OpenAPI Petstore
* This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
*
* The version of the OpenAPI document: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "Tag.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Tag::Tag()
{
    m_Id = 0L;
    m_IdIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    
}

void Tag::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Tag::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Tag::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Tag" : pathPrefix;

        
    

    return success;
}

bool Tag::operator==(const Tag& rhs) const
{
    return
    
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!nameIsSet() && !rhs.nameIsSet()) || (nameIsSet() && rhs.nameIsSet() && getName() == rhs.getName()))
    
    ;
}

bool Tag::operator!=(const Tag& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Tag& o)
{
    j = nlohmann::json();
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.nameIsSet())
        j["name"] = o.m_Name;
    
}

void from_json(const nlohmann::json& j, Tag& o)
{
    if(j.find("id") != j.end())
    {
        j.at("id").get_to(o.m_Id);
        o.m_IdIsSet = true;
    } 
    if(j.find("name") != j.end())
    {
        j.at("name").get_to(o.m_Name);
        o.m_NameIsSet = true;
    } 
    
}

int64_t Tag::getId() const
{
    return m_Id;
}
void Tag::setId(int64_t const value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Tag::idIsSet() const
{
    return m_IdIsSet;
}
void Tag::unsetId()
{
    m_IdIsSet = false;
}
std::string Tag::getName() const
{
    return m_Name;
}
void Tag::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Tag::nameIsSet() const
{
    return m_NameIsSet;
}
void Tag::unsetName()
{
    m_NameIsSet = false;
}


} // namespace org::openapitools::server::model

