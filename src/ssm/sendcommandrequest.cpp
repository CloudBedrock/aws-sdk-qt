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

#include "sendcommandrequest.h"
#include "sendcommandrequest_p.h"
#include "sendcommandresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  SendCommandRequest
 *
 * @brief  Implements SSM SendCommand requests.
 *
 * @see    SSMClient::sendCommand
 */

/**
 * @brief  Constructs a new SendCommandResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendCommandResponse::SendCommandResponse(

/**
 * @brief  Constructs a new SendCommandRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendCommandRequest::SendCommandRequest(const SendCommandRequest &other)
    : SSMRequest(new SendCommandRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendCommandRequest object.
 */
SendCommandRequest::SendCommandRequest()
    : SSMRequest(new SendCommandRequestPrivate(SSMRequest::SendCommandAction, this))
{

}

bool SendCommandRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendCommandResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendCommandResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * SendCommandRequest::response(QNetworkReply * const reply) const
{
    return new SendCommandResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendCommandRequestPrivate
 *
 * @brief  Private implementation for SendCommandRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendCommandRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public SendCommandRequest instance.
 */
SendCommandRequestPrivate::SendCommandRequestPrivate(
    const SSMRequest::Action action, SendCommandRequest * const q)
    : SendCommandPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendCommandRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendCommandRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendCommandRequest instance.
 */
SendCommandRequestPrivate::SendCommandRequestPrivate(
    const SendCommandRequestPrivate &other, SendCommandRequest * const q)
    : SendCommandPrivate(other, q)
{

}
