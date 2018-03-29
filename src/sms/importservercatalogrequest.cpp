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

#include "importservercatalogrequest.h"
#include "importservercatalogrequest_p.h"
#include "importservercatalogresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/**
 * @class  ImportServerCatalogRequest
 *
 * @brief  Implements SMS ImportServerCatalog requests.
 *
 * @see    SMSClient::importServerCatalog
 */

/**
 * @brief  Constructs a new ImportServerCatalogRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportServerCatalogRequest::ImportServerCatalogRequest(const ImportServerCatalogRequest &other)
    : SMSRequest(new ImportServerCatalogRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ImportServerCatalogRequest object.
 */
ImportServerCatalogRequest::ImportServerCatalogRequest()
    : SMSRequest(new ImportServerCatalogRequestPrivate(SMSRequest::ImportServerCatalogAction, this))
{

}

bool ImportServerCatalogRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ImportServerCatalogResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportServerCatalogResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SMSClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportServerCatalogRequest::response(QNetworkReply * const reply) const
{
    return new ImportServerCatalogResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ImportServerCatalogRequestPrivate
 *
 * @brief  Private implementation for ImportServerCatalogRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportServerCatalogRequestPrivate object.
 *
 * @param  action  SMS action being performed.
 * @param  q       Pointer to this object's public ImportServerCatalogRequest instance.
 */
ImportServerCatalogRequestPrivate::ImportServerCatalogRequestPrivate(
    const SMSRequest::Action action, ImportServerCatalogRequest * const q)
    : SMSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ImportServerCatalogRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportServerCatalogRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportServerCatalogRequest instance.
 */
ImportServerCatalogRequestPrivate::ImportServerCatalogRequestPrivate(
    const ImportServerCatalogRequestPrivate &other, ImportServerCatalogRequest * const q)
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
