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

#include "deleteuserdefinedfunctionrequest.h"
#include "deleteuserdefinedfunctionrequest_p.h"
#include "deleteuserdefinedfunctionresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  DeleteUserDefinedFunctionRequest
 *
 * @brief  Implements Glue DeleteUserDefinedFunction requests.
 *
 * @see    GlueClient::deleteUserDefinedFunction
 */

/**
 * @brief  Constructs a new DeleteUserDefinedFunctionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteUserDefinedFunctionRequest::DeleteUserDefinedFunctionRequest(const DeleteUserDefinedFunctionRequest &other)
    : GlueRequest(new DeleteUserDefinedFunctionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteUserDefinedFunctionRequest object.
 */
DeleteUserDefinedFunctionRequest::DeleteUserDefinedFunctionRequest()
    : GlueRequest(new DeleteUserDefinedFunctionRequestPrivate(GlueRequest::DeleteUserDefinedFunctionAction, this))
{

}

bool DeleteUserDefinedFunctionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteUserDefinedFunctionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteUserDefinedFunctionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * DeleteUserDefinedFunctionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserDefinedFunctionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteUserDefinedFunctionRequestPrivate
 *
 * @brief  Private implementation for DeleteUserDefinedFunctionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserDefinedFunctionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public DeleteUserDefinedFunctionRequest instance.
 */
DeleteUserDefinedFunctionRequestPrivate::DeleteUserDefinedFunctionRequestPrivate(
    const GlueRequest::Action action, DeleteUserDefinedFunctionRequest * const q)
    : DeleteUserDefinedFunctionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserDefinedFunctionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserDefinedFunctionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteUserDefinedFunctionRequest instance.
 */
DeleteUserDefinedFunctionRequestPrivate::DeleteUserDefinedFunctionRequestPrivate(
    const DeleteUserDefinedFunctionRequestPrivate &other, DeleteUserDefinedFunctionRequest * const q)
    : DeleteUserDefinedFunctionPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
