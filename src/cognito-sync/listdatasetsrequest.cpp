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

#include "listdatasetsrequest.h"
#include "listdatasetsrequest_p.h"
#include "listdatasetsresponse.h"
#include "cognitosyncrequest_p.h"

namespace QtAws {
namespace CognitoSync {

/*!
 * \class QtAws::CognitoSync::ListDatasetsRequest
 *
 * \brief The ListDatasetsRequest class provides an interface for CognitoSync ListDatasets requests.
 *
 * \ingroup CognitoSync
 *
 *  <fullname>Amazon Cognito Sync</fullname>
 * 
 *  Amazon Cognito Sync provides an AWS service and client library that enable cross-device syncing of application-related
 *  user data. High-level client libraries are available for both iOS and Android. You can use these libraries to persist
 *  data locally so that it's available even if the device is offline. Developer credentials don't need to be stored on the
 *  mobile device to access the service. You can use Amazon Cognito to obtain a normalized user ID and credentials. User
 *  data is persisted in a dataset that can store up to 1 MB of key-value pairs, and you can have up to 20 datasets per user
 * 
 *  identity>
 * 
 *  With Amazon Cognito Sync, the data stored for each identity is accessible only to credentials assigned to that identity.
 *  In order to use the Cognito Sync service, you need to make API calls using credentials retrieved with <a
 *  href="http://docs.aws.amazon.com/cognitoidentity/latest/APIReference/Welcome.html">Amazon Cognito Identity
 * 
 *  service</a>>
 * 
 *  If you want to use Cognito Sync in an Android or iOS application, you will probably want to make API calls via the AWS
 *  Mobile SDK. To learn more, see the <a
 *  href="http://docs.aws.amazon.com/mobile/sdkforandroid/developerguide/cognito-sync.html">Developer Guide for Android</a>
 *  and the <a href="http://docs.aws.amazon.com/mobile/sdkforios/developerguide/cognito-sync.html">Developer Guide for
 *
 * \sa CognitoSyncClient::listDatasets
 */

/*!
 * @brief  Constructs a new ListDatasetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDatasetsRequest::ListDatasetsRequest(const ListDatasetsRequest &other)
    : CognitoSyncRequest(new ListDatasetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListDatasetsRequest object.
 */
ListDatasetsRequest::ListDatasetsRequest()
    : CognitoSyncRequest(new ListDatasetsRequestPrivate(CognitoSyncRequest::ListDatasetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDatasetsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListDatasetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDatasetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDatasetsRequest::response(QNetworkReply * const reply) const
{
    return new ListDatasetsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListDatasetsRequestPrivate
 *
 * @brief  Private implementation for ListDatasetsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListDatasetsRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public ListDatasetsRequest instance.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const CognitoSyncRequest::Action action, ListDatasetsRequest * const q)
    : CognitoSyncRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListDatasetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDatasetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDatasetsRequest instance.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const ListDatasetsRequestPrivate &other, ListDatasetsRequest * const q)
    : CognitoSyncRequestPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace QtAws
