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

#include "startchannelrequest.h"
#include "startchannelrequest_p.h"
#include "startchannelresponse.h"
#include "medialiverequest_p.h"

namespace AWS {
namespace MediaLive {

/**
 * @class  StartChannelRequest
 *
 * @brief  Implements MediaLive StartChannel requests.
 *
 * @see    MediaLiveClient::startChannel
 */

/**
 * @brief  Constructs a new StartChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartChannelResponse::StartChannelResponse(

/**
 * @brief  Constructs a new StartChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartChannelRequest::StartChannelRequest(const StartChannelRequest &other)
    : MediaLiveRequest(new StartChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartChannelRequest object.
 */
StartChannelRequest::StartChannelRequest()
    : MediaLiveRequest(new StartChannelRequestPrivate(MediaLiveRequest::StartChannelAction, this))
{

}

bool StartChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
AwsAbstractResponse * StartChannelRequest::response(QNetworkReply * const reply) const
{
    return new StartChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartChannelRequestPrivate
 *
 * @brief  Private implementation for StartChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartChannelRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public StartChannelRequest instance.
 */
StartChannelRequestPrivate::StartChannelRequestPrivate(
    const MediaLiveRequest::Action action, StartChannelRequest * const q)
    : StartChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartChannelRequest instance.
 */
StartChannelRequestPrivate::StartChannelRequestPrivate(
    const StartChannelRequestPrivate &other, StartChannelRequest * const q)
    : StartChannelPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace AWS
