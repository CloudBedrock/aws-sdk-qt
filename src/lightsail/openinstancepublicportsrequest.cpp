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

#include "openinstancepublicportsrequest.h"
#include "openinstancepublicportsrequest_p.h"
#include "openinstancepublicportsresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  OpenInstancePublicPortsRequest
 *
 * @brief  Implements Lightsail OpenInstancePublicPorts requests.
 *
 * @see    LightsailClient::openInstancePublicPorts
 */

/**
 * @brief  Constructs a new OpenInstancePublicPortsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
OpenInstancePublicPortsResponse::OpenInstancePublicPortsResponse(

/**
 * @brief  Constructs a new OpenInstancePublicPortsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
OpenInstancePublicPortsRequest::OpenInstancePublicPortsRequest(const OpenInstancePublicPortsRequest &other)
    : LightsailRequest(new OpenInstancePublicPortsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new OpenInstancePublicPortsRequest object.
 */
OpenInstancePublicPortsRequest::OpenInstancePublicPortsRequest()
    : LightsailRequest(new OpenInstancePublicPortsRequestPrivate(LightsailRequest::OpenInstancePublicPortsAction, this))
{

}

bool OpenInstancePublicPortsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an OpenInstancePublicPortsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An OpenInstancePublicPortsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * OpenInstancePublicPortsRequest::response(QNetworkReply * const reply) const
{
    return new OpenInstancePublicPortsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  OpenInstancePublicPortsRequestPrivate
 *
 * @brief  Private implementation for OpenInstancePublicPortsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new OpenInstancePublicPortsRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public OpenInstancePublicPortsRequest instance.
 */
OpenInstancePublicPortsRequestPrivate::OpenInstancePublicPortsRequestPrivate(
    const LightsailRequest::Action action, OpenInstancePublicPortsRequest * const q)
    : OpenInstancePublicPortsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new OpenInstancePublicPortsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the OpenInstancePublicPortsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public OpenInstancePublicPortsRequest instance.
 */
OpenInstancePublicPortsRequestPrivate::OpenInstancePublicPortsRequestPrivate(
    const OpenInstancePublicPortsRequestPrivate &other, OpenInstancePublicPortsRequest * const q)
    : OpenInstancePublicPortsPrivate(other, q)
{

}
