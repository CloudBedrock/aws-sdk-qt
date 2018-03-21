/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startsupportdataexportrequest.h"
#include "startsupportdataexportrequest_p.h"
#include "startsupportdataexportresponse.h"
#include "marketplacecommerceanalyticsrequest_p.h"

namespace AWS {
namespace MarketplaceCommerceAnalytics {

/**
 * @class  StartSupportDataExportRequest
 *
 * @brief  Implements MarketplaceCommerceAnalytics StartSupportDataExport requests.
 *
 * @see    MarketplaceCommerceAnalyticsClient::startSupportDataExport
 */

/**
 * @brief  Constructs a new StartSupportDataExportResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartSupportDataExportResponse::StartSupportDataExportResponse(

/**
 * @brief  Constructs a new StartSupportDataExportRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartSupportDataExportRequest::StartSupportDataExportRequest(const StartSupportDataExportRequest &other)
    : MarketplaceCommerceAnalyticsRequest(new StartSupportDataExportRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartSupportDataExportRequest object.
 */
StartSupportDataExportRequest::StartSupportDataExportRequest()
    : MarketplaceCommerceAnalyticsRequest(new StartSupportDataExportRequestPrivate(MarketplaceCommerceAnalyticsRequest::StartSupportDataExportAction, this))
{

}

bool StartSupportDataExportRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartSupportDataExportResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartSupportDataExportResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MarketplaceCommerceAnalyticsClient::send
 */
AwsAbstractResponse * StartSupportDataExportRequest::response(QNetworkReply * const reply) const
{
    return new StartSupportDataExportResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartSupportDataExportRequestPrivate
 *
 * @brief  Private implementation for StartSupportDataExportRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartSupportDataExportRequestPrivate object.
 *
 * @param  action  MarketplaceCommerceAnalytics action being performed.
 * @param  q       Pointer to this object's public StartSupportDataExportRequest instance.
 */
StartSupportDataExportRequestPrivate::StartSupportDataExportRequestPrivate(
    const MarketplaceCommerceAnalyticsRequest::Action action, StartSupportDataExportRequest * const q)
    : StartSupportDataExportPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartSupportDataExportRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartSupportDataExportRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartSupportDataExportRequest instance.
 */
StartSupportDataExportRequestPrivate::StartSupportDataExportRequestPrivate(
    const StartSupportDataExportRequestPrivate &other, StartSupportDataExportRequest * const q)
    : StartSupportDataExportPrivate(other, q)
{

}

} // namespace MarketplaceCommerceAnalytics
} // namespace AWS
