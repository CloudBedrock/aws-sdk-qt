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

#include "deletebackuprequest.h"
#include "deletebackuprequest_p.h"
#include "deletebackupresponse.h"
#include "opsworkscmrequest_p.h"

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  DeleteBackupRequest
 *
 * @brief  Implements OpsWorksCM DeleteBackup requests.
 *
 * @see    OpsWorksCMClient::deleteBackup
 */

/**
 * @brief  Constructs a new DeleteBackupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBackupRequest::DeleteBackupRequest(const DeleteBackupRequest &other)
    : OpsWorksCMRequest(new DeleteBackupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBackupRequest object.
 */
DeleteBackupRequest::DeleteBackupRequest()
    : OpsWorksCMRequest(new DeleteBackupRequestPrivate(OpsWorksCMRequest::DeleteBackupAction, this))
{

}

bool DeleteBackupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBackupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBackupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
AwsAbstractResponse * DeleteBackupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBackupRequestPrivate
 *
 * @brief  Private implementation for DeleteBackupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBackupRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public DeleteBackupRequest instance.
 */
DeleteBackupRequestPrivate::DeleteBackupRequestPrivate(
    const OpsWorksCMRequest::Action action, DeleteBackupRequest * const q)
    : DeleteBackupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBackupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBackupRequest instance.
 */
DeleteBackupRequestPrivate::DeleteBackupRequestPrivate(
    const DeleteBackupRequestPrivate &other, DeleteBackupRequest * const q)
    : DeleteBackupPrivate(other, q)
{

}

} // namespace OpsWorksCM
} // namespace AWS
