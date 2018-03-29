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

#include "decreasereplicationfactorrequest.h"
#include "decreasereplicationfactorrequest_p.h"
#include "decreasereplicationfactorresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/**
 * @class  DecreaseReplicationFactorRequest
 *
 * @brief  Implements DAX DecreaseReplicationFactor requests.
 *
 * @see    DAXClient::decreaseReplicationFactor
 */

/**
 * @brief  Constructs a new DecreaseReplicationFactorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DecreaseReplicationFactorRequest::DecreaseReplicationFactorRequest(const DecreaseReplicationFactorRequest &other)
    : DAXRequest(new DecreaseReplicationFactorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DecreaseReplicationFactorRequest object.
 */
DecreaseReplicationFactorRequest::DecreaseReplicationFactorRequest()
    : DAXRequest(new DecreaseReplicationFactorRequestPrivate(DAXRequest::DecreaseReplicationFactorAction, this))
{

}

bool DecreaseReplicationFactorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DecreaseReplicationFactorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DecreaseReplicationFactorResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DAXClient::send
 */
QtAws::Core::AwsAbstractResponse * DecreaseReplicationFactorRequest::response(QNetworkReply * const reply) const
{
    return new DecreaseReplicationFactorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DecreaseReplicationFactorRequestPrivate
 *
 * @brief  Private implementation for DecreaseReplicationFactorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DecreaseReplicationFactorRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public DecreaseReplicationFactorRequest instance.
 */
DecreaseReplicationFactorRequestPrivate::DecreaseReplicationFactorRequestPrivate(
    const DAXRequest::Action action, DecreaseReplicationFactorRequest * const q)
    : DecreaseReplicationFactorPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DecreaseReplicationFactorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DecreaseReplicationFactorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DecreaseReplicationFactorRequest instance.
 */
DecreaseReplicationFactorRequestPrivate::DecreaseReplicationFactorRequestPrivate(
    const DecreaseReplicationFactorRequestPrivate &other, DecreaseReplicationFactorRequest * const q)
    : DecreaseReplicationFactorPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
