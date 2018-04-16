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

#include "servicecatalogclient.h"
#include "servicecatalogclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptportfoliosharerequest.h"
#include "acceptportfolioshareresponse.h"
#include "associateprincipalwithportfoliorequest.h"
#include "associateprincipalwithportfolioresponse.h"
#include "associateproductwithportfoliorequest.h"
#include "associateproductwithportfolioresponse.h"
#include "associatetagoptionwithresourcerequest.h"
#include "associatetagoptionwithresourceresponse.h"
#include "copyproductrequest.h"
#include "copyproductresponse.h"
#include "createconstraintrequest.h"
#include "createconstraintresponse.h"
#include "createportfoliorequest.h"
#include "createportfolioresponse.h"
#include "createportfoliosharerequest.h"
#include "createportfolioshareresponse.h"
#include "createproductrequest.h"
#include "createproductresponse.h"
#include "createprovisionedproductplanrequest.h"
#include "createprovisionedproductplanresponse.h"
#include "createprovisioningartifactrequest.h"
#include "createprovisioningartifactresponse.h"
#include "createtagoptionrequest.h"
#include "createtagoptionresponse.h"
#include "deleteconstraintrequest.h"
#include "deleteconstraintresponse.h"
#include "deleteportfoliorequest.h"
#include "deleteportfolioresponse.h"
#include "deleteportfoliosharerequest.h"
#include "deleteportfolioshareresponse.h"
#include "deleteproductrequest.h"
#include "deleteproductresponse.h"
#include "deleteprovisionedproductplanrequest.h"
#include "deleteprovisionedproductplanresponse.h"
#include "deleteprovisioningartifactrequest.h"
#include "deleteprovisioningartifactresponse.h"
#include "deletetagoptionrequest.h"
#include "deletetagoptionresponse.h"
#include "describeconstraintrequest.h"
#include "describeconstraintresponse.h"
#include "describecopyproductstatusrequest.h"
#include "describecopyproductstatusresponse.h"
#include "describeportfoliorequest.h"
#include "describeportfolioresponse.h"
#include "describeproductrequest.h"
#include "describeproductresponse.h"
#include "describeproductasadminrequest.h"
#include "describeproductasadminresponse.h"
#include "describeproductviewrequest.h"
#include "describeproductviewresponse.h"
#include "describeprovisionedproductrequest.h"
#include "describeprovisionedproductresponse.h"
#include "describeprovisionedproductplanrequest.h"
#include "describeprovisionedproductplanresponse.h"
#include "describeprovisioningartifactrequest.h"
#include "describeprovisioningartifactresponse.h"
#include "describeprovisioningparametersrequest.h"
#include "describeprovisioningparametersresponse.h"
#include "describerecordrequest.h"
#include "describerecordresponse.h"
#include "describetagoptionrequest.h"
#include "describetagoptionresponse.h"
#include "disassociateprincipalfromportfoliorequest.h"
#include "disassociateprincipalfromportfolioresponse.h"
#include "disassociateproductfromportfoliorequest.h"
#include "disassociateproductfromportfolioresponse.h"
#include "disassociatetagoptionfromresourcerequest.h"
#include "disassociatetagoptionfromresourceresponse.h"
#include "executeprovisionedproductplanrequest.h"
#include "executeprovisionedproductplanresponse.h"
#include "listacceptedportfoliosharesrequest.h"
#include "listacceptedportfoliosharesresponse.h"
#include "listconstraintsforportfoliorequest.h"
#include "listconstraintsforportfolioresponse.h"
#include "listlaunchpathsrequest.h"
#include "listlaunchpathsresponse.h"
#include "listportfolioaccessrequest.h"
#include "listportfolioaccessresponse.h"
#include "listportfoliosrequest.h"
#include "listportfoliosresponse.h"
#include "listportfoliosforproductrequest.h"
#include "listportfoliosforproductresponse.h"
#include "listprincipalsforportfoliorequest.h"
#include "listprincipalsforportfolioresponse.h"
#include "listprovisionedproductplansrequest.h"
#include "listprovisionedproductplansresponse.h"
#include "listprovisioningartifactsrequest.h"
#include "listprovisioningartifactsresponse.h"
#include "listrecordhistoryrequest.h"
#include "listrecordhistoryresponse.h"
#include "listresourcesfortagoptionrequest.h"
#include "listresourcesfortagoptionresponse.h"
#include "listtagoptionsrequest.h"
#include "listtagoptionsresponse.h"
#include "provisionproductrequest.h"
#include "provisionproductresponse.h"
#include "rejectportfoliosharerequest.h"
#include "rejectportfolioshareresponse.h"
#include "scanprovisionedproductsrequest.h"
#include "scanprovisionedproductsresponse.h"
#include "searchproductsrequest.h"
#include "searchproductsresponse.h"
#include "searchproductsasadminrequest.h"
#include "searchproductsasadminresponse.h"
#include "searchprovisionedproductsrequest.h"
#include "searchprovisionedproductsresponse.h"
#include "terminateprovisionedproductrequest.h"
#include "terminateprovisionedproductresponse.h"
#include "updateconstraintrequest.h"
#include "updateconstraintresponse.h"
#include "updateportfoliorequest.h"
#include "updateportfolioresponse.h"
#include "updateproductrequest.h"
#include "updateproductresponse.h"
#include "updateprovisionedproductrequest.h"
#include "updateprovisionedproductresponse.h"
#include "updateprovisioningartifactrequest.h"
#include "updateprovisioningartifactresponse.h"
#include "updatetagoptionrequest.h"
#include "updatetagoptionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ServiceCatalog
 * \brief The QtAws::ServiceCatalog contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ServiceCatalogClient
 *
 * \brief The ServiceCatalogClient class provides access the AWS Service Catalog service.
 *
 * \ingroup ServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 */

/*!
 * \brief Constructs a ServiceCatalogClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ServiceCatalogClient::ServiceCatalogClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ServiceCatalogClientPrivate(this), parent)
{
    Q_D(ServiceCatalogClient);
    d->apiVersion = QStringLiteral("2015-12-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("servicecatalog");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Service Catalog");
    d->serviceName = QStringLiteral("servicecatalog");
}

/*!
 * \overload ServiceCatalogClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
ServiceCatalogClient::ServiceCatalogClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ServiceCatalogClientPrivate(this), parent)
{
    Q_D(ServiceCatalogClient);
    d->apiVersion = QStringLiteral("2015-12-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("servicecatalog");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Service Catalog");
    d->serviceName = QStringLiteral("servicecatalog");
}

/*!
 * Accepts an offer to share the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AcceptPortfolioShareResponse * ServiceCatalogClient::acceptPortfolioShare(const AcceptPortfolioShareRequest &request)
{
    return qobject_cast<AcceptPortfolioShareResponse *>(send(request));
}

/*!
 * Associates the specified principal ARN with the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociatePrincipalWithPortfolioResponse * ServiceCatalogClient::associatePrincipalWithPortfolio(const AssociatePrincipalWithPortfolioRequest &request)
{
    return qobject_cast<AssociatePrincipalWithPortfolioResponse *>(send(request));
}

/*!
 * Associates the specified product with the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateProductWithPortfolioResponse * ServiceCatalogClient::associateProductWithPortfolio(const AssociateProductWithPortfolioRequest &request)
{
    return qobject_cast<AssociateProductWithPortfolioResponse *>(send(request));
}

/*!
 * Associate the specified TagOption with the specified portfolio or
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateTagOptionWithResourceResponse * ServiceCatalogClient::associateTagOptionWithResource(const AssociateTagOptionWithResourceRequest &request)
{
    return qobject_cast<AssociateTagOptionWithResourceResponse *>(send(request));
}

/*!
 * Copies the specified source product to the specified target product or a new
 *
 * product>
 *
 * You can copy a product to the same account or another account. You can copy a product to the same region or another
 *
 * region>
 *
 * This operation is performed asynchronously. To track the progress of the operation, use
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CopyProductResponse * ServiceCatalogClient::copyProduct(const CopyProductRequest &request)
{
    return qobject_cast<CopyProductResponse *>(send(request));
}

/*!
 * Creates a
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateConstraintResponse * ServiceCatalogClient::createConstraint(const CreateConstraintRequest &request)
{
    return qobject_cast<CreateConstraintResponse *>(send(request));
}

/*!
 * Creates a
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePortfolioResponse * ServiceCatalogClient::createPortfolio(const CreatePortfolioRequest &request)
{
    return qobject_cast<CreatePortfolioResponse *>(send(request));
}

/*!
 * Shares the specified portfolio with the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePortfolioShareResponse * ServiceCatalogClient::createPortfolioShare(const CreatePortfolioShareRequest &request)
{
    return qobject_cast<CreatePortfolioShareResponse *>(send(request));
}

/*!
 * Creates a
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateProductResponse * ServiceCatalogClient::createProduct(const CreateProductRequest &request)
{
    return qobject_cast<CreateProductResponse *>(send(request));
}

/*!
 * Creates a plan. A plan includes the list of resources to be created (when provisioning a new product) or modified (when
 * updating a provisioned product) when the plan is
 *
 * executed>
 *
 * You can create one plan per provisioned product. To create a plan for an existing provisioned product, the product
 * status must be AVAILBLE or
 *
 * TAINTED>
 *
 * To view the resource changes in the change set, use <a>DescribeProvisionedProductPlan</a>. To create or modify the
 * provisioned product, use
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateProvisionedProductPlanResponse * ServiceCatalogClient::createProvisionedProductPlan(const CreateProvisionedProductPlanRequest &request)
{
    return qobject_cast<CreateProvisionedProductPlanResponse *>(send(request));
}

/*!
 * Creates a provisioning artifact (also known as a version) for the specified
 *
 * product>
 *
 * You cannot create a provisioning artifact for a product that was shared with
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateProvisioningArtifactResponse * ServiceCatalogClient::createProvisioningArtifact(const CreateProvisioningArtifactRequest &request)
{
    return qobject_cast<CreateProvisioningArtifactResponse *>(send(request));
}

/*!
 * Creates a
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTagOptionResponse * ServiceCatalogClient::createTagOption(const CreateTagOptionRequest &request)
{
    return qobject_cast<CreateTagOptionResponse *>(send(request));
}

/*!
 * Deletes the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteConstraintResponse * ServiceCatalogClient::deleteConstraint(const DeleteConstraintRequest &request)
{
    return qobject_cast<DeleteConstraintResponse *>(send(request));
}

/*!
 * Deletes the specified
 *
 * portfolio>
 *
 * You cannot delete a portfolio if it was shared with you or if it has associated products, users, constraints, or shared
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePortfolioResponse * ServiceCatalogClient::deletePortfolio(const DeletePortfolioRequest &request)
{
    return qobject_cast<DeletePortfolioResponse *>(send(request));
}

/*!
 * Stops sharing the specified portfolio with the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePortfolioShareResponse * ServiceCatalogClient::deletePortfolioShare(const DeletePortfolioShareRequest &request)
{
    return qobject_cast<DeletePortfolioShareResponse *>(send(request));
}

/*!
 * Deletes the specified
 *
 * product>
 *
 * You cannot delete a product if it was shared with you or is associated with a
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteProductResponse * ServiceCatalogClient::deleteProduct(const DeleteProductRequest &request)
{
    return qobject_cast<DeleteProductResponse *>(send(request));
}

/*!
 * Deletes the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteProvisionedProductPlanResponse * ServiceCatalogClient::deleteProvisionedProductPlan(const DeleteProvisionedProductPlanRequest &request)
{
    return qobject_cast<DeleteProvisionedProductPlanResponse *>(send(request));
}

/*!
 * Deletes the specified provisioning artifact (also known as a version) for the specified
 *
 * product>
 *
 * You cannot delete a provisioning artifact associated with a product that was shared with you. You cannot delete the last
 * provisioning artifact for a product, because a product must have at least one provisioning
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteProvisioningArtifactResponse * ServiceCatalogClient::deleteProvisioningArtifact(const DeleteProvisioningArtifactRequest &request)
{
    return qobject_cast<DeleteProvisioningArtifactResponse *>(send(request));
}

/*!
 * Deletes the specified
 *
 * TagOption>
 *
 * You cannot delete a TagOption if it is associated with a product or
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTagOptionResponse * ServiceCatalogClient::deleteTagOption(const DeleteTagOptionRequest &request)
{
    return qobject_cast<DeleteTagOptionResponse *>(send(request));
}

/*!
 * Gets information about the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConstraintResponse * ServiceCatalogClient::describeConstraint(const DescribeConstraintRequest &request)
{
    return qobject_cast<DescribeConstraintResponse *>(send(request));
}

/*!
 * Gets the status of the specified copy product
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCopyProductStatusResponse * ServiceCatalogClient::describeCopyProductStatus(const DescribeCopyProductStatusRequest &request)
{
    return qobject_cast<DescribeCopyProductStatusResponse *>(send(request));
}

/*!
 * Gets information about the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribePortfolioResponse * ServiceCatalogClient::describePortfolio(const DescribePortfolioRequest &request)
{
    return qobject_cast<DescribePortfolioResponse *>(send(request));
}

/*!
 * Gets information about the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProductResponse * ServiceCatalogClient::describeProduct(const DescribeProductRequest &request)
{
    return qobject_cast<DescribeProductResponse *>(send(request));
}

/*!
 * Gets information about the specified product. This operation is run with administrator
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProductAsAdminResponse * ServiceCatalogClient::describeProductAsAdmin(const DescribeProductAsAdminRequest &request)
{
    return qobject_cast<DescribeProductAsAdminResponse *>(send(request));
}

/*!
 * Gets information about the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProductViewResponse * ServiceCatalogClient::describeProductView(const DescribeProductViewRequest &request)
{
    return qobject_cast<DescribeProductViewResponse *>(send(request));
}

/*!
 * Gets information about the specified provisioned
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProvisionedProductResponse * ServiceCatalogClient::describeProvisionedProduct(const DescribeProvisionedProductRequest &request)
{
    return qobject_cast<DescribeProvisionedProductResponse *>(send(request));
}

/*!
 * Gets information about the resource changes for the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProvisionedProductPlanResponse * ServiceCatalogClient::describeProvisionedProductPlan(const DescribeProvisionedProductPlanRequest &request)
{
    return qobject_cast<DescribeProvisionedProductPlanResponse *>(send(request));
}

/*!
 * Gets information about the specified provisioning artifact (also known as a version) for the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProvisioningArtifactResponse * ServiceCatalogClient::describeProvisioningArtifact(const DescribeProvisioningArtifactRequest &request)
{
    return qobject_cast<DescribeProvisioningArtifactResponse *>(send(request));
}

/*!
 * Gets information about the configuration required to provision the specified product using the specified provisioning
 *
 * artifact>
 *
 * If the output contains a TagOption key with an empty list of values, there is a TagOption conflict for that key. The end
 * user cannot take action to fix the conflict, and launch is not blocked. In subsequent calls to <a>ProvisionProduct</a>,
 * do not include conflicted TagOption keys as tags, or this causes the error "Parameter validation failed: Missing
 * required parameter in Tags[<i>N</i>]:<i>Value</i>". Tag the provisioned product with the value
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProvisioningParametersResponse * ServiceCatalogClient::describeProvisioningParameters(const DescribeProvisioningParametersRequest &request)
{
    return qobject_cast<DescribeProvisioningParametersResponse *>(send(request));
}

/*!
 * Gets information about the specified request
 *
 * operation>
 *
 * Use this operation after calling a request operation (for example, <a>ProvisionProduct</a>,
 * <a>TerminateProvisionedProduct</a>, or <a>UpdateProvisionedProduct</a>).
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeRecordResponse * ServiceCatalogClient::describeRecord(const DescribeRecordRequest &request)
{
    return qobject_cast<DescribeRecordResponse *>(send(request));
}

/*!
 * Gets information about the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTagOptionResponse * ServiceCatalogClient::describeTagOption(const DescribeTagOptionRequest &request)
{
    return qobject_cast<DescribeTagOptionResponse *>(send(request));
}

/*!
 * Disassociates a previously associated principal ARN from a specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociatePrincipalFromPortfolioResponse * ServiceCatalogClient::disassociatePrincipalFromPortfolio(const DisassociatePrincipalFromPortfolioRequest &request)
{
    return qobject_cast<DisassociatePrincipalFromPortfolioResponse *>(send(request));
}

/*!
 * Disassociates the specified product from the specified portfolio.
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateProductFromPortfolioResponse * ServiceCatalogClient::disassociateProductFromPortfolio(const DisassociateProductFromPortfolioRequest &request)
{
    return qobject_cast<DisassociateProductFromPortfolioResponse *>(send(request));
}

/*!
 * Disassociates the specified TagOption from the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateTagOptionFromResourceResponse * ServiceCatalogClient::disassociateTagOptionFromResource(const DisassociateTagOptionFromResourceRequest &request)
{
    return qobject_cast<DisassociateTagOptionFromResourceResponse *>(send(request));
}

/*!
 * Provisions or modifies a product based on the resource changes for the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ExecuteProvisionedProductPlanResponse * ServiceCatalogClient::executeProvisionedProductPlan(const ExecuteProvisionedProductPlanRequest &request)
{
    return qobject_cast<ExecuteProvisionedProductPlanResponse *>(send(request));
}

/*!
 * Lists all portfolios for which sharing was accepted by this
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAcceptedPortfolioSharesResponse * ServiceCatalogClient::listAcceptedPortfolioShares(const ListAcceptedPortfolioSharesRequest &request)
{
    return qobject_cast<ListAcceptedPortfolioSharesResponse *>(send(request));
}

/*!
 * Lists the constraints for the specified portfolio and
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListConstraintsForPortfolioResponse * ServiceCatalogClient::listConstraintsForPortfolio(const ListConstraintsForPortfolioRequest &request)
{
    return qobject_cast<ListConstraintsForPortfolioResponse *>(send(request));
}

/*!
 * Lists the paths to the specified product. A path is how the user has access to a specified product, and is necessary
 * when provisioning a product. A path also determines the constraints put on the
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListLaunchPathsResponse * ServiceCatalogClient::listLaunchPaths(const ListLaunchPathsRequest &request)
{
    return qobject_cast<ListLaunchPathsResponse *>(send(request));
}

/*!
 * Lists the account IDs that have access to the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPortfolioAccessResponse * ServiceCatalogClient::listPortfolioAccess(const ListPortfolioAccessRequest &request)
{
    return qobject_cast<ListPortfolioAccessResponse *>(send(request));
}

/*!
 * Lists all portfolios in the
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPortfoliosResponse * ServiceCatalogClient::listPortfolios(const ListPortfoliosRequest &request)
{
    return qobject_cast<ListPortfoliosResponse *>(send(request));
}

/*!
 * Lists all portfolios that the specified product is associated
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPortfoliosForProductResponse * ServiceCatalogClient::listPortfoliosForProduct(const ListPortfoliosForProductRequest &request)
{
    return qobject_cast<ListPortfoliosForProductResponse *>(send(request));
}

/*!
 * Lists all principal ARNs associated with the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPrincipalsForPortfolioResponse * ServiceCatalogClient::listPrincipalsForPortfolio(const ListPrincipalsForPortfolioRequest &request)
{
    return qobject_cast<ListPrincipalsForPortfolioResponse *>(send(request));
}

/*!
 * Lists the plans for the specified provisioned product or all plans to which the user has
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListProvisionedProductPlansResponse * ServiceCatalogClient::listProvisionedProductPlans(const ListProvisionedProductPlansRequest &request)
{
    return qobject_cast<ListProvisionedProductPlansResponse *>(send(request));
}

/*!
 * Lists all provisioning artifacts (also known as versions) for the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListProvisioningArtifactsResponse * ServiceCatalogClient::listProvisioningArtifacts(const ListProvisioningArtifactsRequest &request)
{
    return qobject_cast<ListProvisioningArtifactsResponse *>(send(request));
}

/*!
 * Lists the specified requests or all performed
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRecordHistoryResponse * ServiceCatalogClient::listRecordHistory(const ListRecordHistoryRequest &request)
{
    return qobject_cast<ListRecordHistoryResponse *>(send(request));
}

/*!
 * Lists the resources associated with the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListResourcesForTagOptionResponse * ServiceCatalogClient::listResourcesForTagOption(const ListResourcesForTagOptionRequest &request)
{
    return qobject_cast<ListResourcesForTagOptionResponse *>(send(request));
}

/*!
 * Lists the specified TagOptions or all
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagOptionsResponse * ServiceCatalogClient::listTagOptions(const ListTagOptionsRequest &request)
{
    return qobject_cast<ListTagOptionsResponse *>(send(request));
}

/*!
 * Provisions the specified
 *
 * product>
 *
 * A provisioned product is a resourced instance of a product. For example, provisioning a product based on a
 * CloudFormation template launches a CloudFormation stack and its underlying resources. You can check the status of this
 * request using
 *
 * <a>DescribeRecord</a>>
 *
 * If the request contains a tag key with an empty list of values, there is a tag conflict for that key. Do not include
 * conflicted keys as tags, or this causes the error "Parameter validation failed: Missing required parameter in
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ProvisionProductResponse * ServiceCatalogClient::provisionProduct(const ProvisionProductRequest &request)
{
    return qobject_cast<ProvisionProductResponse *>(send(request));
}

/*!
 * Rejects an offer to share the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RejectPortfolioShareResponse * ServiceCatalogClient::rejectPortfolioShare(const RejectPortfolioShareRequest &request)
{
    return qobject_cast<RejectPortfolioShareResponse *>(send(request));
}

/*!
 * Lists the provisioned products that are available (not
 *
 * terminated)>
 *
 * To use additional filtering, see
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ScanProvisionedProductsResponse * ServiceCatalogClient::scanProvisionedProducts(const ScanProvisionedProductsRequest &request)
{
    return qobject_cast<ScanProvisionedProductsResponse *>(send(request));
}

/*!
 * Gets information about the products to which the caller has
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchProductsResponse * ServiceCatalogClient::searchProducts(const SearchProductsRequest &request)
{
    return qobject_cast<SearchProductsResponse *>(send(request));
}

/*!
 * Gets information about the products for the specified portfolio or all
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchProductsAsAdminResponse * ServiceCatalogClient::searchProductsAsAdmin(const SearchProductsAsAdminRequest &request)
{
    return qobject_cast<SearchProductsAsAdminResponse *>(send(request));
}

/*!
 * Gets information about the provisioned products that meet the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchProvisionedProductsResponse * ServiceCatalogClient::searchProvisionedProducts(const SearchProvisionedProductsRequest &request)
{
    return qobject_cast<SearchProvisionedProductsResponse *>(send(request));
}

/*!
 * Terminates the specified provisioned
 *
 * product>
 *
 * This operation does not delete any records associated with the provisioned
 *
 * product>
 *
 * You can check the status of this request using
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TerminateProvisionedProductResponse * ServiceCatalogClient::terminateProvisionedProduct(const TerminateProvisionedProductRequest &request)
{
    return qobject_cast<TerminateProvisionedProductResponse *>(send(request));
}

/*!
 * Updates the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateConstraintResponse * ServiceCatalogClient::updateConstraint(const UpdateConstraintRequest &request)
{
    return qobject_cast<UpdateConstraintResponse *>(send(request));
}

/*!
 * Updates the specified
 *
 * portfolio>
 *
 * You cannot update a product that was shared with
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdatePortfolioResponse * ServiceCatalogClient::updatePortfolio(const UpdatePortfolioRequest &request)
{
    return qobject_cast<UpdatePortfolioResponse *>(send(request));
}

/*!
 * Updates the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateProductResponse * ServiceCatalogClient::updateProduct(const UpdateProductRequest &request)
{
    return qobject_cast<UpdateProductResponse *>(send(request));
}

/*!
 * Requests updates to the configuration of the specified provisioned
 *
 * product>
 *
 * If there are tags associated with the object, they cannot be updated or added. Depending on the specific updates
 * requested, this operation can update with no interruption, with some interruption, or replace the provisioned product
 *
 * entirely>
 *
 * You can check the status of this request using
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateProvisionedProductResponse * ServiceCatalogClient::updateProvisionedProduct(const UpdateProvisionedProductRequest &request)
{
    return qobject_cast<UpdateProvisionedProductResponse *>(send(request));
}

/*!
 * Updates the specified provisioning artifact (also known as a version) for the specified
 *
 * product>
 *
 * You cannot update a provisioning artifact for a product that was shared with
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateProvisioningArtifactResponse * ServiceCatalogClient::updateProvisioningArtifact(const UpdateProvisioningArtifactRequest &request)
{
    return qobject_cast<UpdateProvisioningArtifactResponse *>(send(request));
}

/*!
 * Updates the specified
 *
 * @param  request Request to send to AWS Service Catalog.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateTagOptionResponse * ServiceCatalogClient::updateTagOption(const UpdateTagOptionRequest &request)
{
    return qobject_cast<UpdateTagOptionResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  ServiceCatalogClientPrivate
 *
 * @brief  Private implementation for ServiceCatalogClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ServiceCatalogClientPrivate object.
 *
 * @param  q  Pointer to this object's public ServiceCatalogClient instance.
 */
ServiceCatalogClientPrivate::ServiceCatalogClientPrivate(ServiceCatalogClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ServiceCatalog
} // namespace QtAws
