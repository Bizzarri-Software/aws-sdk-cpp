/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/MethodSnapshot.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{
  /**
   * <p>An immutable representation of a <a>RestApi</a> resource that can be called
   * by users using <a>Stages</a>. A deployment must be associated with a
   * <a>Stage</a> for it to be callable over the Internet.</p>
   */
  class AWS_APIGATEWAY_API GetDeploymentResult
  {
  public:
    GetDeploymentResult();
    GetDeploymentResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeploymentResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = value; }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline GetDeploymentResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline GetDeploymentResult& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline GetDeploymentResult& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline GetDeploymentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline GetDeploymentResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline GetDeploymentResult& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline double GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline void SetCreatedDate(double value) { m_createdDate = value; }

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline GetDeploymentResult& WithCreatedDate(double value) { SetCreatedDate(value); return *this;}

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& GetApiSummary() const{ return m_apiSummary; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline void SetApiSummary(const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& value) { m_apiSummary = value; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline void SetApiSummary(Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>&& value) { m_apiSummary = value; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline GetDeploymentResult& WithApiSummary(const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& value) { SetApiSummary(value); return *this;}

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline GetDeploymentResult& WithApiSummary(Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>&& value) { SetApiSummary(value); return *this;}

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline GetDeploymentResult& AddApiSummary(const Aws::String& key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummary[key] = value; return *this; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline GetDeploymentResult& AddApiSummary(Aws::String&& key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummary[key] = value; return *this; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline GetDeploymentResult& AddApiSummary(const Aws::String& key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummary[key] = value; return *this; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline GetDeploymentResult& AddApiSummary(Aws::String&& key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummary[key] = value; return *this; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline GetDeploymentResult& AddApiSummary(const char* key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummary[key] = value; return *this; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline GetDeploymentResult& AddApiSummary(const char* key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummary[key] = value; return *this; }

  private:
    Aws::String m_id;
    Aws::String m_description;
    double m_createdDate;
    Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>> m_apiSummary;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
