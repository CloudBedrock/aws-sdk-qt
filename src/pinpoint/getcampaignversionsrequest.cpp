/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getcampaignversionsrequest.h"
#include "getcampaignversionsrequest_p.h"
#include "getcampaignversionsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionsRequest
 *
 * \brief The GetCampaignVersionsRequest class encapsulates Pinpoint GetCampaignVersions requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getCampaignVersions
 */

/*!
 * @brief  Constructs a new GetCampaignVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCampaignVersionsRequest::GetCampaignVersionsRequest(const GetCampaignVersionsRequest &other)
    : PinpointRequest(new GetCampaignVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetCampaignVersionsRequest object.
 */
GetCampaignVersionsRequest::GetCampaignVersionsRequest()
    : PinpointRequest(new GetCampaignVersionsRequestPrivate(PinpointRequest::GetCampaignVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignVersionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetCampaignVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCampaignVersionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignVersionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetCampaignVersionsRequestPrivate
 *
 * @brief  Private implementation for GetCampaignVersionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetCampaignVersionsRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetCampaignVersionsRequest instance.
 */
GetCampaignVersionsRequestPrivate::GetCampaignVersionsRequestPrivate(
    const PinpointRequest::Action action, GetCampaignVersionsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetCampaignVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCampaignVersionsRequest instance.
 */
GetCampaignVersionsRequestPrivate::GetCampaignVersionsRequestPrivate(
    const GetCampaignVersionsRequestPrivate &other, GetCampaignVersionsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
