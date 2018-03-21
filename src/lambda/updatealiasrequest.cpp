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

#include "updatealiasrequest.h"
#include "updatealiasrequest_p.h"
#include "updatealiasresponse.h"
#include "lambdarequest_p.h"

namespace AWS {
namespace Lambda {

/**
 * @class  UpdateAliasRequest
 *
 * @brief  Implements Lambda UpdateAlias requests.
 *
 * @see    LambdaClient::updateAlias
 */

/**
 * @brief  Constructs a new UpdateAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAliasResponse::UpdateAliasResponse(

/**
 * @brief  Constructs a new UpdateAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAliasRequest::UpdateAliasRequest(const UpdateAliasRequest &other)
    : LambdaRequest(new UpdateAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAliasRequest object.
 */
UpdateAliasRequest::UpdateAliasRequest()
    : LambdaRequest(new UpdateAliasRequestPrivate(LambdaRequest::UpdateAliasAction, this))
{

}

bool UpdateAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAliasResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * UpdateAliasRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAliasRequestPrivate
 *
 * @brief  Private implementation for UpdateAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAliasRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public UpdateAliasRequest instance.
 */
UpdateAliasRequestPrivate::UpdateAliasRequestPrivate(
    const LambdaRequest::Action action, UpdateAliasRequest * const q)
    : UpdateAliasPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAliasRequest instance.
 */
UpdateAliasRequestPrivate::UpdateAliasRequestPrivate(
    const UpdateAliasRequestPrivate &other, UpdateAliasRequest * const q)
    : UpdateAliasPrivate(other, q)
{

}

} // namespace Lambda
} // namespace AWS
