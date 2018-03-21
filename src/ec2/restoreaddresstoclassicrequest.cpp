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

#include "restoreaddresstoclassicrequest.h"
#include "restoreaddresstoclassicrequest_p.h"
#include "restoreaddresstoclassicresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  RestoreAddressToClassicRequest
 *
 * @brief  Implements EC2 RestoreAddressToClassic requests.
 *
 * @see    EC2Client::restoreAddressToClassic
 */

/**
 * @brief  Constructs a new RestoreAddressToClassicResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreAddressToClassicResponse::RestoreAddressToClassicResponse(

/**
 * @brief  Constructs a new RestoreAddressToClassicRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreAddressToClassicRequest::RestoreAddressToClassicRequest(const RestoreAddressToClassicRequest &other)
    : EC2Request(new RestoreAddressToClassicRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreAddressToClassicRequest object.
 */
RestoreAddressToClassicRequest::RestoreAddressToClassicRequest()
    : EC2Request(new RestoreAddressToClassicRequestPrivate(EC2Request::RestoreAddressToClassicAction, this))
{

}

bool RestoreAddressToClassicRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreAddressToClassicResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreAddressToClassicResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * RestoreAddressToClassicRequest::response(QNetworkReply * const reply) const
{
    return new RestoreAddressToClassicResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreAddressToClassicRequestPrivate
 *
 * @brief  Private implementation for RestoreAddressToClassicRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreAddressToClassicRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public RestoreAddressToClassicRequest instance.
 */
RestoreAddressToClassicRequestPrivate::RestoreAddressToClassicRequestPrivate(
    const EC2Request::Action action, RestoreAddressToClassicRequest * const q)
    : RestoreAddressToClassicPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreAddressToClassicRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreAddressToClassicRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreAddressToClassicRequest instance.
 */
RestoreAddressToClassicRequestPrivate::RestoreAddressToClassicRequestPrivate(
    const RestoreAddressToClassicRequestPrivate &other, RestoreAddressToClassicRequest * const q)
    : RestoreAddressToClassicPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
