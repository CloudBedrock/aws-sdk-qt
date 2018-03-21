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

#include "updatedirectoryconfigrequest.h"
#include "updatedirectoryconfigrequest_p.h"
#include "updatedirectoryconfigresponse.h"
#include "appstreamrequest_p.h"

namespace AWS {
namespace AppStream {

/**
 * @class  UpdateDirectoryConfigRequest
 *
 * @brief  Implements AppStream UpdateDirectoryConfig requests.
 *
 * @see    AppStreamClient::updateDirectoryConfig
 */

/**
 * @brief  Constructs a new UpdateDirectoryConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDirectoryConfigResponse::UpdateDirectoryConfigResponse(

/**
 * @brief  Constructs a new UpdateDirectoryConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDirectoryConfigRequest::UpdateDirectoryConfigRequest(const UpdateDirectoryConfigRequest &other)
    : AppStreamRequest(new UpdateDirectoryConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDirectoryConfigRequest object.
 */
UpdateDirectoryConfigRequest::UpdateDirectoryConfigRequest()
    : AppStreamRequest(new UpdateDirectoryConfigRequestPrivate(AppStreamRequest::UpdateDirectoryConfigAction, this))
{

}

bool UpdateDirectoryConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDirectoryConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDirectoryConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * UpdateDirectoryConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDirectoryConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDirectoryConfigRequestPrivate
 *
 * @brief  Private implementation for UpdateDirectoryConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDirectoryConfigRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public UpdateDirectoryConfigRequest instance.
 */
UpdateDirectoryConfigRequestPrivate::UpdateDirectoryConfigRequestPrivate(
    const AppStreamRequest::Action action, UpdateDirectoryConfigRequest * const q)
    : UpdateDirectoryConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDirectoryConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDirectoryConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDirectoryConfigRequest instance.
 */
UpdateDirectoryConfigRequestPrivate::UpdateDirectoryConfigRequestPrivate(
    const UpdateDirectoryConfigRequestPrivate &other, UpdateDirectoryConfigRequest * const q)
    : UpdateDirectoryConfigPrivate(other, q)
{

}
