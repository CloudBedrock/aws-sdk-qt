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

#include "putinstancepublicportsrequest.h"
#include "putinstancepublicportsrequest_p.h"
#include "putinstancepublicportsresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  PutInstancePublicPortsRequest
 *
 * @brief  Implements Lightsail PutInstancePublicPorts requests.
 *
 * @see    LightsailClient::putInstancePublicPorts
 */

/**
 * @brief  Constructs a new PutInstancePublicPortsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutInstancePublicPortsRequest::PutInstancePublicPortsRequest(const PutInstancePublicPortsRequest &other)
    : LightsailRequest(new PutInstancePublicPortsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutInstancePublicPortsRequest object.
 */
PutInstancePublicPortsRequest::PutInstancePublicPortsRequest()
    : LightsailRequest(new PutInstancePublicPortsRequestPrivate(LightsailRequest::PutInstancePublicPortsAction, this))
{

}

bool PutInstancePublicPortsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutInstancePublicPortsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutInstancePublicPortsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * PutInstancePublicPortsRequest::response(QNetworkReply * const reply) const
{
    return new PutInstancePublicPortsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutInstancePublicPortsRequestPrivate
 *
 * @brief  Private implementation for PutInstancePublicPortsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutInstancePublicPortsRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public PutInstancePublicPortsRequest instance.
 */
PutInstancePublicPortsRequestPrivate::PutInstancePublicPortsRequestPrivate(
    const LightsailRequest::Action action, PutInstancePublicPortsRequest * const q)
    : PutInstancePublicPortsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutInstancePublicPortsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutInstancePublicPortsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutInstancePublicPortsRequest instance.
 */
PutInstancePublicPortsRequestPrivate::PutInstancePublicPortsRequestPrivate(
    const PutInstancePublicPortsRequestPrivate &other, PutInstancePublicPortsRequest * const q)
    : PutInstancePublicPortsPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
