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

#include "updateconstraintrequest.h"
#include "updateconstraintrequest_p.h"
#include "updateconstraintresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  UpdateConstraintRequest
 *
 * @brief  Implements ServiceCatalog UpdateConstraint requests.
 *
 * @see    ServiceCatalogClient::updateConstraint
 */

/**
 * @brief  Constructs a new UpdateConstraintRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateConstraintRequest::UpdateConstraintRequest(const UpdateConstraintRequest &other)
    : ServiceCatalogRequest(new UpdateConstraintRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateConstraintRequest object.
 */
UpdateConstraintRequest::UpdateConstraintRequest()
    : ServiceCatalogRequest(new UpdateConstraintRequestPrivate(ServiceCatalogRequest::UpdateConstraintAction, this))
{

}

bool UpdateConstraintRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateConstraintResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateConstraintResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * UpdateConstraintRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConstraintResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateConstraintRequestPrivate
 *
 * @brief  Private implementation for UpdateConstraintRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConstraintRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public UpdateConstraintRequest instance.
 */
UpdateConstraintRequestPrivate::UpdateConstraintRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdateConstraintRequest * const q)
    : UpdateConstraintPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConstraintRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateConstraintRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateConstraintRequest instance.
 */
UpdateConstraintRequestPrivate::UpdateConstraintRequestPrivate(
    const UpdateConstraintRequestPrivate &other, UpdateConstraintRequest * const q)
    : UpdateConstraintPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
