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
#include <aws/cloudfront/model/ListInvalidations2015_04_17Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListInvalidations2015_04_17Request::ListInvalidations2015_04_17Request() : 
    m_distributionIdHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String ListInvalidations2015_04_17Request::SerializePayload() const
{
  return "";
}

void ListInvalidations2015_04_17Request::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_markerHasBeenSet)
    {
     ss << m_marker;
     uri.AddQueryStringParameter("Marker", ss.str());
     ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
     ss << m_maxItems;
     uri.AddQueryStringParameter("MaxItems", ss.str());
     ss.str("");
    }

}

