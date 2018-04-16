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

#include "deletedatasourcerequest.h"
#include "deletedatasourcerequest_p.h"
#include "deletedatasourceresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteDataSourceRequest
 *
 * \brief The DeleteDataSourceRequest class provides an interface for AppSync DeleteDataSource requests.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteDataSource
 */

/*!
 * @brief  Constructs a new DeleteDataSourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDataSourceRequest::DeleteDataSourceRequest(const DeleteDataSourceRequest &other)
    : AppSyncRequest(new DeleteDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteDataSourceRequest object.
 */
DeleteDataSourceRequest::DeleteDataSourceRequest()
    : AppSyncRequest(new DeleteDataSourceRequestPrivate(AppSyncRequest::DeleteDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteDataSourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDataSourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDataSourceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteDataSourceRequestPrivate
 *
 * @brief  Private implementation for DeleteDataSourceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDataSourceRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public DeleteDataSourceRequest instance.
 */
DeleteDataSourceRequestPrivate::DeleteDataSourceRequestPrivate(
    const AppSyncRequest::Action action, DeleteDataSourceRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDataSourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDataSourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDataSourceRequest instance.
 */
DeleteDataSourceRequestPrivate::DeleteDataSourceRequestPrivate(
    const DeleteDataSourceRequestPrivate &other, DeleteDataSourceRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
