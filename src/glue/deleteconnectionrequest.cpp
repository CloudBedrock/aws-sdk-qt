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

#include "deleteconnectionrequest.h"
#include "deleteconnectionrequest_p.h"
#include "deleteconnectionresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  DeleteConnectionRequest
 *
 * @brief  Implements Glue DeleteConnection requests.
 *
 * @see    GlueClient::deleteConnection
 */

/**
 * @brief  Constructs a new DeleteConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteConnectionRequest::DeleteConnectionRequest(const DeleteConnectionRequest &other)
    : GlueRequest(new DeleteConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteConnectionRequest object.
 */
DeleteConnectionRequest::DeleteConnectionRequest()
    : GlueRequest(new DeleteConnectionRequestPrivate(GlueRequest::DeleteConnectionAction, this))
{

}

bool DeleteConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteConnectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * DeleteConnectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteConnectionRequestPrivate
 *
 * @brief  Private implementation for DeleteConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConnectionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public DeleteConnectionRequest instance.
 */
DeleteConnectionRequestPrivate::DeleteConnectionRequestPrivate(
    const GlueRequest::Action action, DeleteConnectionRequest * const q)
    : DeleteConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteConnectionRequest instance.
 */
DeleteConnectionRequestPrivate::DeleteConnectionRequestPrivate(
    const DeleteConnectionRequestPrivate &other, DeleteConnectionRequest * const q)
    : DeleteConnectionPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
