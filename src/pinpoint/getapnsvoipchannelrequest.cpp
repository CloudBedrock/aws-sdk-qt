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

#include "getapnsvoipchannelrequest.h"
#include "getapnsvoipchannelrequest_p.h"
#include "getapnsvoipchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsVoipChannelRequest
 *
 * \brief The GetApnsVoipChannelRequest class encapsulates Pinpoint GetApnsVoipChannel requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getApnsVoipChannel
 */

/*!
 * @brief  Constructs a new GetApnsVoipChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetApnsVoipChannelRequest::GetApnsVoipChannelRequest(const GetApnsVoipChannelRequest &other)
    : PinpointRequest(new GetApnsVoipChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetApnsVoipChannelRequest object.
 */
GetApnsVoipChannelRequest::GetApnsVoipChannelRequest()
    : PinpointRequest(new GetApnsVoipChannelRequestPrivate(PinpointRequest::GetApnsVoipChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetApnsVoipChannelRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetApnsVoipChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetApnsVoipChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApnsVoipChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetApnsVoipChannelResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetApnsVoipChannelRequestPrivate
 *
 * @brief  Private implementation for GetApnsVoipChannelRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetApnsVoipChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetApnsVoipChannelRequest instance.
 */
GetApnsVoipChannelRequestPrivate::GetApnsVoipChannelRequestPrivate(
    const PinpointRequest::Action action, GetApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetApnsVoipChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetApnsVoipChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetApnsVoipChannelRequest instance.
 */
GetApnsVoipChannelRequestPrivate::GetApnsVoipChannelRequestPrivate(
    const GetApnsVoipChannelRequestPrivate &other, GetApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
