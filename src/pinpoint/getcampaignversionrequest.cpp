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

#include "getcampaignversionrequest.h"
#include "getcampaignversionrequest_p.h"
#include "getcampaignversionresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetCampaignVersionRequest
 *
 * @brief  Implements Pinpoint GetCampaignVersion requests.
 *
 * @see    PinpointClient::getCampaignVersion
 */

/**
 * @brief  Constructs a new GetCampaignVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCampaignVersionResponse::GetCampaignVersionResponse(

/**
 * @brief  Constructs a new GetCampaignVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCampaignVersionRequest::GetCampaignVersionRequest(const GetCampaignVersionRequest &other)
    : PinpointRequest(new GetCampaignVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCampaignVersionRequest object.
 */
GetCampaignVersionRequest::GetCampaignVersionRequest()
    : PinpointRequest(new GetCampaignVersionRequestPrivate(PinpointRequest::GetCampaignVersionAction, this))
{

}

bool GetCampaignVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCampaignVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCampaignVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetCampaignVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCampaignVersionRequestPrivate
 *
 * @brief  Private implementation for GetCampaignVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCampaignVersionRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetCampaignVersionRequest instance.
 */
GetCampaignVersionRequestPrivate::GetCampaignVersionRequestPrivate(
    const PinpointRequest::Action action, GetCampaignVersionRequest * const q)
    : GetCampaignVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCampaignVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCampaignVersionRequest instance.
 */
GetCampaignVersionRequestPrivate::GetCampaignVersionRequestPrivate(
    const GetCampaignVersionRequestPrivate &other, GetCampaignVersionRequest * const q)
    : GetCampaignVersionPrivate(other, q)
{

}
