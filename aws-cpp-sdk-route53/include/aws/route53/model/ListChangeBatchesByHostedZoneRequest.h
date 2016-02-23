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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53
{
namespace Model
{

  /**
   * <p>The input for a ListChangeBatchesByHostedZone request.</p>
   */
  class AWS_ROUTE53_API ListChangeBatchesByHostedZoneRequest : public Route53Request
  {
  public:
    ListChangeBatchesByHostedZoneRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the hosted zone that you want to see changes for.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone that you want to see changes for.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that you want to see changes for.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that you want to see changes for.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone that you want to see changes for.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that you want to see changes for.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that you want to see changes for.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The start of the time period you want to see changes for.</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The start of the time period you want to see changes for.</p>
     */
    inline void SetStartDate(const Aws::String& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The start of the time period you want to see changes for.</p>
     */
    inline void SetStartDate(Aws::String&& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The start of the time period you want to see changes for.</p>
     */
    inline void SetStartDate(const char* value) { m_startDateHasBeenSet = true; m_startDate.assign(value); }

    /**
     * <p>The start of the time period you want to see changes for.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}

    /**
     * <p>The start of the time period you want to see changes for.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithStartDate(Aws::String&& value) { SetStartDate(value); return *this;}

    /**
     * <p>The start of the time period you want to see changes for.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithStartDate(const char* value) { SetStartDate(value); return *this;}

    /**
     * <p>The end of the time period you want to see changes for.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The end of the time period you want to see changes for.</p>
     */
    inline void SetEndDate(const Aws::String& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The end of the time period you want to see changes for.</p>
     */
    inline void SetEndDate(Aws::String&& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The end of the time period you want to see changes for.</p>
     */
    inline void SetEndDate(const char* value) { m_endDateHasBeenSet = true; m_endDate.assign(value); }

    /**
     * <p>The end of the time period you want to see changes for.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}

    /**
     * <p>The end of the time period you want to see changes for.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithEndDate(Aws::String&& value) { SetEndDate(value); return *this;}

    /**
     * <p>The end of the time period you want to see changes for.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithEndDate(const char* value) { SetEndDate(value); return *this;}

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

    /**
     * <p>The page marker.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The page marker.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The page marker.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The page marker.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The page marker.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The page marker.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>The page marker.</p>
     */
    inline ListChangeBatchesByHostedZoneRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;
    Aws::String m_startDate;
    bool m_startDateHasBeenSet;
    Aws::String m_endDate;
    bool m_endDateHasBeenSet;
    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws